package PostFix;

import java.util.EmptyStackException;

public class ListStack<E> {
    private Node<E> top;
    private int size;

    public ListStack(){
        top=null;
        size=0;
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
        return top.getItem();
    }
    public void push(E newItem){
        Node newNode = new Node(newItem, top);
        top=newNode;
        size++;
    }
    public E pop(){
        if (isEmpty()){
            throw new EmptyStackException();
        }
        E item = top.getItem();
        top = top.getNext();
        size--;
        return item;
    }
    public static int priority(char ch){
        if (ch=='(')return 0;
        if (ch=='+'||ch=='-') return 1;
        else return 2;
    }

    public static void postfix(String s){
        ListStack<Character> stack = new ListStack<>();
        for (int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            switch (ch){
                case '+':
                case '-':
                case '*':
                case '/':
                    while(!stack.isEmpty()&& priority(stack.peek())>=priority(ch)){
                        System.out.print(stack.pop());
                    }stack.push(ch);break;
                case '(':
                    stack.push(ch);break;
                case ')':
                    while(!stack.isEmpty()&&stack.peek()!='('){
                        System.out.print(stack.pop());
                    }
                    if(!stack.isEmpty()){
                        stack.pop();
                    }
                    break;
                default:
                    System.out.print(ch);
            }
        }
        while(!stack.isEmpty()){
            System.out.print(stack.pop());
        }
        System.out.println();
    }
}
