package Stack;

import java.util.EmptyStackException;

public class ListStack <E>{
    private Node<E> top;
    private int size;

    public ListStack(){
        Node top = null;
        int size=0;
    }
    public boolean isEmpty(){
        return size==0;
    }
    public int size(){
        return size;
    }
    public E peek(){
        if (isEmpty()){
            throw new EmptyStackException();
        }
        return (E) top.getItem();
    }
    public void push(E newItem){
        Node newNode = new Node(newItem, top);
        top = newNode;
        size++;
    }
    public E pop(){
        if (isEmpty()){
            throw new EmptyStackException();
        }
        E topItem = (E) top.getItem();
        top=top.getNext();
        size--;
        return topItem;
    }
    public void print(){
        Node p = top;
        while(p!=null){

        }
    }
}
