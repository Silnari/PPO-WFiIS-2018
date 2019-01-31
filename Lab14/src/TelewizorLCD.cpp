#include <iostream>
#include "TelewizorLCD.h"

void TelewizorLCD::Wyswietl(const Urzadzenie* urzadzenie) const{
	std::cout << "Podlaczono "<< _nazwa << " i " << urzadzenie -> GetNazwa() << std::endl;
	std::cout << "- - - - - - - - " << std::endl;
	for(int i = 0; i< _y ; i++){
		for(int j = 0; j<_x; j++){
			std::cout << urzadzenie -> GetL();
		}
		std::cout<<std::endl;
	}
	std::cout << "- - - - - - - - \n" << std::endl;
}