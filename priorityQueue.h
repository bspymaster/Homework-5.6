// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.


#include "heap.h"
#include "PriorityPair.h"

template <typename E>
class IntCompare{
public:
	static bool prior(PriorityPair<E> current, PriorityPair<E> parent){
		return (current.getPriority() < parent.getPriority());
	}
};

template <typename E,typename comp>
class PriorityQueue{
private:
	heap<PriorityPair<E>, IntCompare<E>>* tree;
public:
	PriorityQueue(int maxSize){
		PriorityPair<E>* objArray = new PriorityPair<E>[maxSize];
		tree = new heap<PriorityPair<E>,IntCompare<E>> (objArray, 0, maxSize);
	}
	void enqueue(E ObjectID, int priority){
		PriorityPair<E> obj(ObjectID, priority);
		tree->insert(obj);
	}
	E dequeue(){
		return tree->removefirst().getData();
	}
	void changeWeight(int ObjectID, int newPriority){
		
	}
};