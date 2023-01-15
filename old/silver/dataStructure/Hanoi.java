public class Hanoi {
    public void print(int n) {
        System.out.println("원반이 " + n + "개인 경우");
        System.out.print("(원반 이름: 크기가 작은-큰 순서 ");
        for (int i = 1; i < n + 1; i++) {
            if(i==n){
                System.out.println(i+")");
                System.out.println();
            }
            else{System.out.print(i+"-");}
        }
    }
    public void move(int n, char start, char dest){
        System.out.println("원반 "+n+"을 "+start+"에서 "+dest+"로 이동");
    }
    public void run(int n, char start,char mid, char dest){
        if(n==1){
            move(1,start,dest);
        }
        else{
            run(n-1,start,dest,mid);
            move(n,start,dest);
            run(n-1,mid,start,dest);
        }
    }
    public static void main(String[] args) {
        Hanoi h = new Hanoi();
        h.print(4);
        h.run(4,'A','B','C');
    }
}
