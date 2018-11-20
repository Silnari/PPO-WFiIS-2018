#pragma once
#include <iostream>
#include "Grade.h"

using namespace std;

class Grade;

class GradeBook{
public:
	/*
	* @destruktor, ma usuwac, ale jeszcze pracuje mozliwe ze nie bedzie za bardzo usuwac :C
	*/
	~GradeBook();

	/*
	* @fn - print
	* @brief - wypisuje ocene
	*/
	void print() const;

	/*
	* @fn - insert
	* @brief - wstawia ocene z klasy Grade do dziennika
	*/
	GradeBook insert(Grade * g);
	/*
	* @fn - insert
	* @brief - wstawia const ocene z klasy Grade do dziennika
	*/
	GradeBook insert(const Grade * g);

	/*
	* @fn - addGrade
	* @brief - dodaje ocene do dziennika
	*/
	GradeBook addGrade(const double x);
private:
	Grade* _ocenki;
	const Grade* _cocenki;
	int _cl = 0;
	int _l = 0;
};
