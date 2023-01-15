package Bracket;

public class Node <E> {
    private E item;
    private Node<E> next;

    public Node(E newItem, Node p){
        item = newItem;
        next = p;
    }

    public E getItem() {
        return item;
    }

    public void setItem(E item) {
        this.item = item;
    }

    public Node getNext() {
        return next;
    }

    public void setNext(Node next) {
        this.next = next;
    }
}