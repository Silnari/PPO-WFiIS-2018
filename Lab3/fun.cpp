#include "lab03.h"

float *tofree[2];

ciag InicjalizujCiagGeometryczny (int rozmiarx, float iloraz1){ 
	ciag xd;
	xd.tab = (float*)calloc(rozmiarx,sizeof(float));
	xd.tab[0] = 1;
	xd.tab[1] = 1;
	for(int i=1; i<rozmiarx;i++){
		xd.tab[i] = xd.tab[i-1]*iloraz1;
	}
	if(iloraz1 == 2) {
   		tofree[0] = xd.tab;  
 	}
  	else if (iloraz1 == 3.0) {
  		tofree[1] = xd.tab;  
  	
 	}
	return xd;
}

void Wypisz(ciag geometryczny1, int rozmiar){ 
	for(int i=0; i<rozmiar; i++){
		printf("%.1f ",geometryczny1.tab[i]);
	}
	printf("\n");
}

float Suma(ciag geometryczny1, int rozmiar){ 
	static int lol;
	float suma = 0;
	for(int i=0; i<rozmiar; i++){
		suma += geometryczny1.tab[i];
	}
	if(lol!=0)
	printf("Suma =");
	lol++;
	return suma;
}

float Iloczyn(ciag geometryczny1, int rozmiar){
	float temp=1;
	for(int i = 0; i<rozmiar;i++){
		temp*=geometryczny1.tab[i];
	}
	printf("Iloczyn =");
	return temp;
}

float Min(ciag geometryczny1, int rozmiar){
	float temp = geometryczny1.tab[0];
	for(int i =1; i<rozmiar; i++){
		if(temp > geometryczny1.tab[i]) temp = geometryczny1.tab[i];
	}
	printf("Min = ");
	return temp;
}

float Max(ciag geometryczny1, int rozmiar){
	float temp = geometryczny1.tab[0];
	for(int i =1; i<rozmiar; i++){
		if(temp < geometryczny1.tab[i]) temp = geometryczny1.tab[i];
	}
	printf("Max = ");
	return temp;
}

void WykonajIWypisz (operacja p, ciag geometryczny1, int rozmiar){
	printf("%.1f\n",p(geometryczny1,rozmiar));
}

void UsunCiagi(){
	free(tofree[1]);
	free(tofree[0]);
}