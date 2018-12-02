#pragma once
#include "Main.h"
#include "StudentsList.h"
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	Student() = default;
	Student(string name, string sur): _n(name), _s(sur), _id(ID){}
	~Student();

	static int ID;

	void Print() {
		cout << "Student " << _id << ": " << _n << " " << _s << endl;
	}
	
private:
	string _n;
	string _s;
	int _id;
};

