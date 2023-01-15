package Hash;

public class DoubleHashing <K, V>{
    private int N=0, M=13;
    private K[] a = (K[]) new Object[M];
    private V[] dt = (V[]) new Object[M];
    private int hash(K key){
        return (key.hashCode()&0x7fffffff)%M;
    }
    public void put(K key, V data){
        int initialpos=hash(key);
        int i=initialpos;
        int j=1;
        int d=(7-(int)key%7);
        do{
            if (a[i]==null){
                a[i]=key;
                dt[i]=data; N++;
                return;
            }
            if (a[i].equals(key)){
                dt[i]=data;
                return;
            }
            i=(initialpos+j*d)%M;
            j++;
        }while(N<M);
    }
    public V get(K key){
        int initialpos=hash(key);
        int i=initialpos;
        int j=1;
        int d=(7-(int)key%7);
        while(a[i]!=null){
            if (a[i].equals(key))
                return dt[i];
            i=(initialpos+j*d)%M;
            j++;
        }
        return null;
    }
    public void print(){
        for (int j=0; j<M; j++){
            System.out.print(j+"\t   ");
        }
        System.out.println();
        for (int i=0; i<M; i++){
            System.out.print(a[i]+"  \t");
        }
    }
}
