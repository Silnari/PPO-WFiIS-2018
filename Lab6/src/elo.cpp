#include "elo.h"

void AddStudent(int *liczba, char ***imie, char ***nazwiska, int **rok, const char *a, const char *b, const char *n, int y) {
	if (*liczba == 0) {
		*imie = new char*[3];
		*nazwiska = new char*[3];
		*rok = new int[3];
	}
	(*rok)[*liczba] = y;

	(*nazwiska)[*liczba] = new char[strlen(n)+1];
	strcpy((*nazwiska)[*liczba], n);
	(*imie)[*liczba] = new char[strlen(a) + strlen(b)+2];
	std::string temp;
	temp.append(a);
	temp.append(" ");
	temp.append(b);
	strcpy((*imie)[*liczba], temp.c_str());

	*liczba = *liczba + 1;
}

void PrintListContent(int liczba, char **tab) {
	for (int i = 0; i < liczba; i++) {
		std::cout << *(tab + i) << std::endl;
	}
}

void PrintAllListContent(int liczba, char **tab, char **tab2, int *y) {
	for (int i = 0; i < liczba; i++) {
		std::cout << *(tab + i) << " " << *(tab2 + i) << " " << *(y + i) << std::endl;
	}
}

void DeleteStudent(int *liczba, char ***imie, char ***nazwiska, int **rok, int x) {
	std::cout << "XD1\n";
	delete[] (imie)[x]; 
	delete[] (*nazwiska)[x];
	std::cout << "XD2\n";
	for (int i = x; i < *liczba - 1; i++) {
		(*nazwiska)[i] = (*nazwiska)[i + 1];
		(*imie)[i] = (*imie)[i + 1];
		(*rok)[i] = (*rok)[i + 1];
		std::cout << "XD3\n";
	}
	std::cout << "XD4\n";
	*liczba = *liczba - 1;
}

void ClearStudents(int *liczba, char ***imie, char ***nazwiska, int **rok) {
	for (int i = 0; i < *liczba; i++) {
		delete[](*imie)[i];
		delete[](*nazwiska)[i];
	}
	delete[]*imie;
	delete[]*nazwiska;
	delete[]*rok;
}