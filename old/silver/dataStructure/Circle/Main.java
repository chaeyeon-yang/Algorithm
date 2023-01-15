package Circle;

public class Main {
    public static void main(String[] args) {
        CList<String> s = new CList<>();

        s.insert("pear"); s.print();
        s.insert("cherry"); s.print();
        s.insert("orange"); s.print();
        s.insert("apple"); s.print();
        System.out.println(": s의 길이 = "+s.size()+"\n");

        s.delete(); s.print();
        System.out.println(": s의 길이 = "+s.size()+"\n");

    }
}
