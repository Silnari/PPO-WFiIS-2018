#pragma once
#include <iostream>

using namespace std;

/*
* class - Grade
* @brief - przechowuje ocene i ID
*/
class Grade{
public:
	/*
	* @domyslny konstruktor
	*/
	Grade(){}

	/*
	* @zmienna statyczna przechowywujaca ID oceny
	*/
	static int nextID;

	/*
	* @konstruktor 
	* @brief - wpisuje ocene x
	*/
	Grade(const double x);

	/*
	* @fn - print
	* @brief - wypisuje ocene
	*/
	void print() const;

private:
	double _val;
	int _id;
};
