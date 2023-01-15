package Single;

public class Main {
    public static void main(String[] args) {

        // 단순연결리스트가 사이클을 가지고 있는 경우
        SList<Integer> m = new SList<>();
        m.insertFront(500); m.insertFront(400);
        m.insertFront(300); m.insertFront(200);
        m.insertFront(100); m.head.getNext().getNext().getNext().getNext().setNext(m.head);
        m.print();

        System.out.println("  Has Loop? "+m.checkCycle(m.head));

        // 단순연결리스트가 사이클을 가지고 있지 않은 경우
        SList<Integer> n = new SList<>();
        n.insertFront(500); n.insertFront(100);
        n.insertFront(800); n.insertFront(300);
        n.insertFront(100); n.print();
        n.checkCycle(n.head);
        System.out.println("  Has Loop? "+n.checkCycle(n.head));
    }
}
