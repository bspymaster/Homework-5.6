#include "priorityQueue.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	PriorityQueue<int,IntCompare<int>> queue = PriorityQueue<IntCompare>(7);
	queue.enqueue(1, 1);
	queue.enqueue(3, 3);
	queue.enqueue(2, 2);

	cout << queue.dequeue();
	cout << queue.dequeue();
	cout << queue.dequeue();
	while (1){}
	return 0;
}
