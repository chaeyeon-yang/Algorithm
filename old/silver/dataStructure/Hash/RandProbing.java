package Hash;

import java.util.Random;

public class RandProbing <K, V>{
    private int N=0, M=13;
    private K[] a = (K[]) new Object[M];
    private V[] d = (V[]) new Object[M];
    private int hash(K key){
        return (key.hashCode()&0x7fffffff)%M;
    }
    public void put(K key, V data){
        int initialpos=hash(key);
        int i=initialpos;
        Random rand = new Random();
        rand.setSeed(10);
        do {
            if (a[i]==null){
                a[i]=key;
                d[i]=data; N++;
                return;
            }
            if (a[i].equals(key)){
                d[i]=data;
                return;
            }
            i=(initialpos+rand.nextInt(1000))%M;
        }while(N<M);
    }
    public V get(K key){
        Random rand=new Random();
        rand.setSeed(10);
        int initialpos=hash(key);
        int i=initialpos;
        while(a[i]!=null){
            if (a[i].equals(key))
                return d[i];
            i=(initialpos+rand.nextInt(1000))%M;
        }
        return null;
    }
    public void print(){
        for (int j=0; j<M; j++){
            System.out.print(j+"\t   ");
        }
        System.out.println();
        for (int i=0; i<M; i++){
            System.out.print(a[i]+"\t   ");
        }
    }
}

