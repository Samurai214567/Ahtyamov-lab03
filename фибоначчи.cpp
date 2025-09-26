// Пример структуры узла
struct FibNode {
    int key;
    FibNode* child;
    FibNode* left;
    FibNode* right;
    int degree;
};

class FibonacciHeap {
    FibNode* minNode;
    int count;
public:
    void insert(int key) { /* ... */ }
    int extractMin() { /* ... */ }
};
