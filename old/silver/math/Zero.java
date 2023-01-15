package DoS;

import java.util.ArrayList;
import java.util.Scanner;

public class Zero {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> a= new ArrayList<>();
        int cnt = sc.nextInt();
        int sum=0;
        for (int i=0; i<cnt; i++){
            int ans = sc.nextInt();
            if (ans!=0){
                a.add(ans);
            }else{
                a.remove(a.size()-1);
            }
        }
        for (int i=0; i<a.size(); i++){
            sum+=a.get(i);
        }
        System.out.println(sum);
    }
}
