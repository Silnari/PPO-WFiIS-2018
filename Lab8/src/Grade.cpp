#include "Grade.h"

int Grade::nextID = 1;

void Grade::print() const{
	cout << "Grade ID=" << _id << " value=" << _val << endl;
}

Grade::Grade(const double x){
	_val = x;
	_id = Grade::nextID;
	Grade::nextID++;
}
