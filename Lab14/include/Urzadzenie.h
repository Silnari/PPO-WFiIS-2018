#pragma once
#include <string>

class Urzadzenie{
public:
	//konstruktor
	Urzadzenie(const char l, std::string str = ""): _l(l), _nazwa(str) {}
	// virtual ~Urzadzenie() = default;
	//funkcja zwracajaca znak ktory ma zostac wypisany
	char GetL() const{ return _l;}
	//funkcja zwracajaca nazwe urzadzenia
	std::string GetNazwa() const {return _nazwa;}
protected:
	char _l;
	std::string _nazwa;
};