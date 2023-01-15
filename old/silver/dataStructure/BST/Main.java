package BST;

public class Main {
    public static void main(String[] args) {
        BST b = new BST(50, "Apple");
        b.put(30, "Lemon");
        b.put(10, "Cherry");
        b.put(40, "Orange");
        b.put(80, "Mango");
        b.put(90, "Lime");
        b.put(35, "pear");

        System.out.println("60201689/10주차 출석과제/양채연");
        Node n = b.getRoot();
        b.inorder(n);

    }
}
