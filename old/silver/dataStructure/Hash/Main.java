package Hash;

public class Main {
    public static void main(String[] args) {
        LinearProbing<Integer, String> l = new LinearProbing<>();
        l.put(25,"grape"); l.put(37, "apple");
        l.put(18,"banana"); l.put(55, "cherry");
        l.put(22,"mango"); l.put(35, "lime");
        l.put(50, "orange"); l.put(63, "watermelon");
        System.out.println("< 선형 조사 >");
        System.out.println("탐색 결과:");
        System.out.println("50의 data = "+l.get(50));
        System.out.println("63의 data = "+l.get(63));
        System.out.println();
        System.out.println("해시 테이블:");
        l.print();

        QuadProbing<Integer, String> q = new QuadProbing<>();
        q.put(25,"grape"); q.put(37, "apple");
        q.put(18,"banana"); q.put(55, "cherry");
        q.put(22,"mango"); q.put(35, "lime");
        q.put(50, "orange"); q.put(63, "watermelon");
        System.out.println();
        System.out.println();
        System.out.println("< 이차 조사 >");
        System.out.println("탐색 결과:");
        System.out.println("50의 data = "+q.get(50));
        System.out.println("63의 data = "+q.get(63));
        System.out.println();
        System.out.println("해시 테이블:");
        q.print();

        RandProbing<Integer, String> r = new RandProbing<>();
        r.put(25,"grape"); r.put(37, "apple");
        r.put(18,"banana"); r.put(55, "cherry");
        r.put(22,"mango"); r.put(35, "lime");
        r.put(50, "orange"); r.put(63, "watermelon");
        System.out.println();
        System.out.println();
        System.out.println("< 랜덤 조사 >");
        System.out.println("탐색 결과:");
        System.out.println("50의 data = "+r.get(50));
        System.out.println("63의 data = "+r.get(63));
        System.out.println();
        System.out.println("해시 테이블:");
        r.print();

        DoubleHashing d = new DoubleHashing();
        d.put(25,"grape"); d.put(37, "apple");
        d.put(18,"banana"); d.put(55, "cherry");
        d.put(22,"mango"); d.put(35, "lime");
        d.put(50, "orange"); d.put(63, "watermelon");
        System.out.println();
        System.out.println();
        System.out.println("< 이중 해싱 >");
        System.out.println("탐색 결과:");
        System.out.println("50의 data = "+d.get(50));
        System.out.println("63의 data = "+d.get(63));
        System.out.println();
        System.out.println("해시 테이블:");
        d.print();

        Chaining<Integer, String> c = new Chaining<>();
        c.put(25,"grape"); c.put(37, "apple");
        c.put(18,"banana"); c.put(55, "cherry");
        c.put(22,"mango"); c.put(35, "lime");
        c.put(50, "orange"); c.put(63, "watermelon");
        System.out.println();
        System.out.println();
        System.out.println("< Chaining 방식 >");
        System.out.println("탐색 결과:");
        System.out.println("50의 data = "+c.get(50));
        System.out.println("63의 data = "+c.get(63));
        System.out.println("37의 data = "+c.get(37));
        System.out.println("22의 data = "+c.get(22));
        System.out.println();
        System.out.println("해시 테이블:");
        c.print();
    }
}
