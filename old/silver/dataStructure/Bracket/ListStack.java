package Bracket;

import java.util.EmptyStackException;

public class ListStack <E> {
    private Node top;
    private int size;

    public ListStack() {
        Node top = null;
        int size = 0;
    }

    public boolean isEmpty() {
        return size == 0;
    }

    public int size() {
        return size;
    }

    public Node<E> getTop() {
        return top;
    }

    public E peek() {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        return (E) top.getItem();
    }

    public void push(E newItem) {
        Node newNode = new Node(newItem, top);
        top = newNode;
        size++;
    }

    public E pop() {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        E topItem = (E) top.getItem();
        top = top.getNext();
        size--;
        return topItem;
    }

    public static void isPaired(String s) {
        ListStack<Character> n = new ListStack<>();
        String part = null;
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            switch (ch) {
                case '{':
                case '(':
                    n.push(ch);
                    break;
                case ')':
                    if (n.isEmpty()){
                        throw new EmptyStackException();
                    }
                    if (n.peek() == '(') {
                        n.pop();
                        continue;
                    } else {
                        part = ")";
                        break;
                    }
                case '}':
                    if (n.isEmpty()){
                        throw new EmptyStackException();
                    }
                    if (n.peek() == '{') {
                        n.pop();
                        continue;
                    } else {
                        part = "}";
                        break;
                    }

            }
        }
            if (n.isEmpty()) {
                System.out.println("괄호 짝이 맞다");
            } else {
                System.out.println("입력 스트링의 " + part + " 부분에서 짝이 맞지 않는다.");
            }
        }
    }

