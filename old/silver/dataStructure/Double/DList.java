package Double;

import java.util.NoSuchElementException;

public class DList <E>{
    protected DNode head, tail;
    protected int size;

    public DList(){
        head = new DNode(null,null,null);
        tail = new DNode(null, head,null);
        head.setNext(tail);
        size = 0;
    }
    public void print(){
        DNode p = head.getNext();
        if (p.getItem() == null){
            System.out.println("리스트 비어있음");
        }
        for (int i=0; i<size; i++){
            System.out.print(p.getItem()+" ");
            p=p.getNext();
        }
        System.out.println();
    }
    public void insertAfter(DNode p, E newItem){
        DNode t = p.getNext();
        DNode newNode = new DNode(newItem, p, t);
        p.setNext(newNode);
        t.setPrevious(newNode);
        size++;
    }
    public void insertBefore(DNode p, E newItem){
        DNode t = p.getPrevious();
        DNode newNode = new DNode(newItem, t,p);
        p.setPrevious(newNode);
        t.setNext(newNode);
        size++;
    }
    public void delete(DNode p){
        if (p==null){
            throw new NoSuchElementException();
        }
        DNode t = p.getPrevious();
        DNode n= p.getNext();
        t.setNext(n);
        n.setPrevious(t);
        size--;
    }
}
