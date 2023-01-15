package Bracket;

import static Bracket.ListStack.isPaired;

public class Main {
    public static void main(String[] args) {
        String s1 = "{{(){()}}}";
        isPaired(s1);

        String s2 = "{{(){()})()}";
        isPaired(s2);
    }
}
