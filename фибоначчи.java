public class FibonacciHeap {
    private static class Node {
        int key;
        Node child, left, right;
        int degree;
    }
    
    private Node minNode;
    private int size;
    
    public void insert(int key) { /* ... */ }
    public int extractMin() { /* ... */ }
}
