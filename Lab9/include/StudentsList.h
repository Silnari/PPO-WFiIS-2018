#pragma once
#include "Main.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

class Student;

class StudentsList
{
public:
	StudentsList(string txt): _name(txt){}
	~StudentsList();
	StudentsList(const StudentsList &toCpy);

	void PrintInfo() {
		cout << "Student list: " << _name << endl;
	}

	StudentsList AddStudent(Student *toAdd);

	void PrintAll();
	

	void Clear();
private:
	string _name;
	Student **_list;
	int _len = 0;
};

