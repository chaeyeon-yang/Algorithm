package Sort;

public class Shell {
    public static void sort(Comparable[] a){
        int N=a.length;
        int h=4;
        while(h>=1){
            for (int i=0; i<N; i++){
                for (int j=i; j>=h && isLess(a[j],a[j-h]); j-=h){
                    swap(a,j,j-h);
                }
            }
            h/=3;
        }
        print(a);
    }
    public static void print(Comparable[] a){
        for (int i=0; i<a.length; i++){
            System.out.print(a[i]+" ");
        }
    }
    private static boolean isLess(Comparable i, Comparable j){
        return (i.compareTo(j)<0);
    }
    private static void swap(Comparable[] a, int i, int j){
        Comparable temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
