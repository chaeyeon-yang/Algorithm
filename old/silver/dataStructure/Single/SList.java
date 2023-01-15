package Single;

import java.util.NoSuchElementException;

public class SList <E extends Comparable<E>>{
    protected Node head;
    private int size;

    public SList(){
        head=null;
        size=0;
    }

    public int size(){
        return size;
    }

    public boolean isEmpty(){
        return size==0;
    }
    public void print(){
        Node p = head;
        for (int i=0; i<size; i++){
            System.out.print(p.getItem()+"\t");
            p=p.getNext();
        }
    }

    public int search(E target){
        Node p = head;
        for (int i=0; i<size; i++){
            if (target==p.getItem()) return i;
            p=p.getNext();
        }
        return -1;
    }

    public void insertFront(E newItem){
        head = new Node(newItem, head);
        size++;
    }
    public void insertAfter(E newItem, Node p){
        p.setNext(new Node(newItem,p.getNext()));
        size++;
    }
    public void deleteFront(){
        if (isEmpty()){
            throw new NoSuchElementException();
        }
        head=head.getNext();
        size--;
    }
    public void deleteAfter(Node p){
        if (p==null){
            throw new NoSuchElementException();
        }
        Node t = p.getNext();
        p.setNext(t.getNext());
        size--;
    }
    public Boolean checkCycle(Node t){
        int a = 0;
        Node cur = head.getNext();
        while(true){
            Node target = head;
            for (int b=0; b<a; b++){
                if (cur.getNext()==target){return true;}
                target=target.getNext();
            }
            cur=cur.getNext();
            if (cur==null) {return false;}
            a++;
        }
    }
}
