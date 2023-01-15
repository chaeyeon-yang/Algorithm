package Hash;

public class Chaining <K, V>{
    public static class Node{
        private Object key;
        private Object data;
        private Node next;
        public Node(Object newkey, Object newdata, Node ref){
            key=newkey;
            data=newdata;
            next=ref;
        }
        public Object getKey(){return key;}
        public Object getData(){return data;}
    }
    private int M=13;
    private Node[] a = new Node[M];
    private int hash(K key){
        return (key.hashCode()&0x7fffffff)%M;
    }
    public V get(K key){
        int i=hash(key);
        for (Node x=a[i]; x!=null; x=x.next){
            if (key.equals(x.key)) return (V) x.data;
        }
        return null;
    }
    public void put(K key, V data){
        int i=hash(key);
        for (Node x=a[i]; x!=null; x=x.next){
            if (key.equals(x.key)){
                x.data=data;
                return;
            }
        }
        a[i]=new Node(key, data, a[i]);
    }
    public void print(){
        for (int i=0; i<M; i++){
            if (a[i]==null) {
                System.out.println(i);
                continue;
            }
            else {
                System.out.print(i);
                for (Node x = a[i]; x != null; x = x.next) {
                    System.out.print("-->");
                    System.out.print("["+x.getKey() + ", " +x.getData()+ "]");
                }
                System.out.println();
            }
        }
    }
}
