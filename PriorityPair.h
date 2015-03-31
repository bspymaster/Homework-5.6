template < typename E >
class PriorityPair {
private:
	E data;
	int priority;
public:
	PriorityPair(E _data, int _priority){
		data = _data;
		priority = _priority;
	}
	PriorityPair() : data(){ //data must have constructer with no arguments
		priority = 0;
	}
	E getData(){ return data; }
	int getPriority(){ return priority; }
	
	int setData(){}
};