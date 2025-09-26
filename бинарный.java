import java.util.PriorityQueue;

// Бинарная куча через PriorityQueue
PriorityQueue<Integer> minHeap = new PriorityQueue<>();
minHeap.add(5);
minHeap.add(2);
minHeap.add(10);
System.out.println(minHeap.poll()); // 2

// Биномиальная куча реализуется через список деревьев
