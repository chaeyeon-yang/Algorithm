package AVL;

public class Node <Key extends Comparable<Key>, Value> {
    public Key id;
    public Value name;
    public int height;
    public Node left, right;

    public Node(Key newID, Value newName, int newHt) {
        id = newID;
        Value name = newName;
        height = newHt;
        left=right=null;
    }

}

