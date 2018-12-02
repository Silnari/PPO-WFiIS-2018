#include "StudentsList.h"


int Student::ID = 1;


StudentsList::~StudentsList()
{
	/*for (int i = 0; i < _len; i++) {
		delete[] _list[i];
	}
	delete[]_list;*/
}

StudentsList::StudentsList(const StudentsList& toCpy){
	_name = toCpy._name;
	_len = toCpy._len;
	_list = new Student*[_len];
	for (int i = 0; i < _len; i++) {
		_list[i] = toCpy._list[i];
	}
}

StudentsList StudentsList::AddStudent(Student *toAdd){
	if (_len == 0) {
		_list = new Student*[1];
		_list[0] = toAdd;
	}
	else {
		Student **temp = new Student*[_len + 1];
		for (int i = 0; i < _len; i++) {
			temp[i] = _list[i];
		}
		temp[_len] = toAdd;
		delete []_list;
		_list = temp;
	}
	_len++;
	Student::ID++;
	return *this;
}

void StudentsList::PrintAll(){
	if (_len == 0) cout << "Empty list" << endl;
	else {
		PrintInfo();
		for (int i = 0; i < _len; i++) {
			_list[i]->Print();
		}
		cout << endl;
	}
}

void StudentsList::Clear(){
	for (int i = 0; i < _len; i++) {
		_list[i] = nullptr;
	}
	_len = 0;
}
