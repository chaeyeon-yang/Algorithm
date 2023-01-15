package PostFix;

import static PostFix.ListStack.postfix;

public class Main {
    public static void main(String[] args) {
        System.out.println("양채연/60201689/DS과제 #5");
        postfix("A-B+C/D");
        postfix("A/B-C*D");
        postfix("A-B*C+D/E-F");
        postfix("(A-B)*C-(D/(E+F))");
    }
}
