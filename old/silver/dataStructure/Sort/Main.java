package Sort;

public class Main {
    public static void main(String[] args) {
        System.out.println("양채연_60201689_DS14주차출석과제");
        Integer a[] = {65,95,90,80,55,70,35,50,10,25,40,30};
        Selection s = new Selection();
        System.out.println("선택 정렬");
        s.sort(a);
        System.out.println("\n삽입 정렬");
        Insertion i = new Insertion();
        i.sort(a);
        System.out.println("\n쉘 정렬");
        Shell s2 = new Shell();
        s2.sort(a);
        System.out.println("\n힙 정렬");
        Heap h = new Heap();
        h.sort(a);
        System.out.println("\n병합 정렬");
        Merge m = new Merge();
        m.sort(a);

    }
}
