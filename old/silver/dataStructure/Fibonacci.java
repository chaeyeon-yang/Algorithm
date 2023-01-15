public class Fibonacci {
    public static int run(int n){
        if(n<=1){return n;}
        else {return run(n - 2) + run(n - 1);}
    }
    public static void main(String[] args) {
        for (int i=0; i<10; i++){
            System.out.print(run(i)+" ");
        }
    }
}
