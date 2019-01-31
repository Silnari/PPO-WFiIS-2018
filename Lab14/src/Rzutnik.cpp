#include <iostream>
#include "Rzutnik.h"

void Rzutnik::Wyswietl(const Urzadzenie* urzadzenie) const{
	std::cout << "Podlaczono "<< _nazwa << " i " << urzadzenie -> GetNazwa() << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ " << std::endl;
	for(int i = 0; i< _y ; i++){
		for(int j = 0; j<_x; j++){
			std::cout << urzadzenie -> GetL();
		}
		std::cout<<std::endl;
	}
	std::cout << "_ _ _ _ _ _ _ _ \n" << std::endl;
}
