package Circle;

import java.util.NoSuchElementException;

public class CList <E>{
    private Node last;
    private int size;

    public CList(){
        last = null;
        size = 0;
    }

    public boolean isEmpty(){
        return size==0;
    }

    public int size(){
        return size;
    }

    public void print(){
        Node p = last.getNext();
        for (int i=0; i<size; i++){
            System.out.print(p.getItem()+" ");
            p = p.getNext();
        }
        System.out.println();
    }

    public void insert(E newItem){
        Node newNode = new Node(newItem, null);
        if (last == null){
            newNode.setNext(newNode);
            last = newNode;
        }
        else{
            newNode.setNext(last.getNext());
            last.setNext(newNode);
        }
        size++;
    }
    public void delete(){
        if (isEmpty()){throw new NoSuchElementException();}
        Node t = last.getNext();
        if (t==last){last = null;}
        else{
            last.setNext(t.getNext());
        }
        size--;
    }
}
