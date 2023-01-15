package BST;

public class BST <Key extends Comparable<Key>, Value> {
    public Node root;
    public Node getRoot(){return root;}
    public BST(Key newId, Value newName){
        root=new Node(newId, newName);
    }
    public Value get(Key k){return get(root, k);}
    public Value get(Node n, Key k){
        if (n==null) return null;
        int t= n.getId().compareTo(k);

        if (t>0) return get(n.getLeft(), k);
        else if (t<0) return get(n.getRight(), k);
        else return (Value)n.getName();
    }
    public void put (Key k, Value v){
        root=put(root, k, v);
    }
    public Node put(Node n, Key k, Value v){
        if (n==null) return new Node(k,v);
        int t=n.getId().compareTo(k);
        if (t>0) n.setLeft(put(n.getLeft(),k,v));
        else if(t<0) n.setRight(put(n.getRight(),k,v));
        else n.setName(v);
        return n;
    }
    public Key min(){
        if (root==null) return null;
        return (Key) min(root).getId();
    }
    private Node min(Node n){
        if (n.getLeft()==null) return n;
        return min(n.getLeft());
    }
    public void deleteMin(){
        if (root==null) System.out.println("empty 트리");
        root=deleteMin(root);
    }
    public Node deleteMin(Node n){
        if (n.getLeft()==null) return n.getRight();
        n.setLeft(deleteMin(n.getLeft()));
        return n;
    }
    public void inorder(Node n){
        if (n!=null){
            inorder(n.getLeft());
            System.out.print(n.getName()+" ");
            inorder(n.getRight());
        }
    }
}
