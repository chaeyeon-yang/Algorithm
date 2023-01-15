package Sort;

public class Merge {
    private static void merge(Comparable[] a, Comparable[] b, int low,int mid, int high){
        int i=low, j=mid+1;
        for (int k=low; k<=high; k++){
            if (i>mid) b[k]=a[j++];
            else if (j>high) b[k]=a[i++];
            else if (isLess(a[j],a[i])) b[k]=a[j++];
            else b[k]=a[i++];
        }
        for (int k=low; k<=high; k++) a[k]=b[k];

    }
    public static void print(Comparable[] a){
        for (int i=0; i<a.length; i++){
            System.out.print(a[i]+" ");
        }
    }
    private static void sort(Comparable[] a, Comparable[] b, int low, int high){
        if (high<=low) return;
        int mid=low+(high-low)/2;
        sort(a,b,low,mid);
        sort(a,b,mid+1,high);
        merge(a,b,low,mid,high);
    }
    public static void sort(Comparable[] a){
        Comparable[] b=new Comparable[a.length];
        sort(a,b,0,a.length-1);
        print(a);
    }
    private static boolean isLess(Comparable v, Comparable w){
        return (v.compareTo(w)<0);
    }
}
