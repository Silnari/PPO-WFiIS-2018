#include "GradeBook.h"
#include "Grade.h"


void GradeBook::print() const{
	cout << "Grades in the book:\n";
	for(int i = 0 ; i < _l ; i++){
		this->_ocenki[i].print();
	}	
	for(int i = 0 ; i < _cl ; i++){
		this->_cocenki[i].print();
	}
	cout<<endl;
}

GradeBook::~GradeBook(){
	//delete[] _ocenki;
	//delete[] _cocenki;
}

GradeBook GradeBook::insert(Grade * g){
	if(_l == 0){
		_ocenki = new Grade;
		_ocenki = g;
		_l++;
	}
	else{
		Grade *temp = new Grade;
		temp = g;
		Grade *temp2 = new Grade[_l];
		for(int i = 0; i < _l; i++){
			temp2[i] = this->_ocenki[i];
		}
		delete [] _ocenki;
		_ocenki = new Grade[_l + 1];
		for(int i = 0; i < _l; i++){
			this->_ocenki[i] = temp2[i];
		}
		_ocenki[_l] = *temp;
		delete temp;
		delete [] temp2;
		_l++;
	}
	return *this;
}

GradeBook GradeBook::insert(const Grade * g){
	_cocenki = new Grade;
	_cocenki = g;
	_cl++;
	return *this;
}

GradeBook GradeBook::addGrade(const double x){
	Grade *temp = new Grade(x);
	insert(temp);
	return *this;
}
