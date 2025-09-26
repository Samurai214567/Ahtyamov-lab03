#include <queue>
#include <vector>

// Бинарная куча через priority_queue
std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
minHeap.push(5);
minHeap.push(2);
minHeap.push(10);
int minVal = minHeap.top(); // 2
minHeap.pop();

// Реализация биномиальной кучи требует собственного класса с деревьями
