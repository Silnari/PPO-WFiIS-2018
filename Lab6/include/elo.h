#pragma once
#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)


/*
* fn - AddStudent
* brief - funkcja przypisuje imienia, nazwisko i rok do odpowiedniej tablicy w odpowiednim miejscu
*/
void AddStudent(int *liczba, char ***imie, char ***nazwiska, int **rok, const char *a, const char *b, const char *n, int y);

/*
* fn - printListContent
* brief - funckcja wypisuje imiona lub nazwiska, w zaleznosci co do niej przesylamy
*/
void PrintListContent(int liczba, char **tab);

/*
* fn - PrintAllListContent
* brief - funkcja wypisuje i imiona i nazwiska
*/
void PrintAllListContent(int liczba, char **tab, char **tab2, int *y);


/*
* fn - DeleteStudent
* brief - funkcja 'czysci' wybranego studenta
*/
void DeleteStudent(int *liczba, char ***imie, char ***nazwiska, int **rok, int x);

/*
* fn - ClearStudents
* brief - funkcja 'czysci' wszystko
*/
void ClearStudents(int *liczba, char ***imie, char ***nazwiska, int **rok);
