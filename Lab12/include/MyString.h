#include <iostream>

class MyString{
public:
        /*
        * @fn - operator*
        * @brief - funckja mnozaca MyString o podana ilosc razy (globalna aby mozna bylo pomnozyc 2*MyString)
        * @return - podany MyString * n
        */
        friend MyString operator*(const int n, const MyString &m);
        /*
        * @konstruktory
        * @ pierwszy domyslny drugi z podanym tekstem
        */
        MyString() = default;
        MyString(const char*txt);
        /*
        * @ destruktor
        * @ czysci pamiec
        */
        ~MyString();
        /*
        * @fn - Print
        * @brief - wypisuje klase na ekran
        */
        void Print(){
                std::cout << _txt << std::endl;
        }
        /*
        * @fn - operator==
        * @brief - operator porownojacy 2 stringi
        * @return - false jesli rozne, true jesli takie same
        */
        bool operator==(const MyString &toCmp) const;
        /*
        * @fn - operator=
        * @brief - funckja przypisujaca jednego MyString do drugiego
        * @return - MyString ktory chcemy przypisac
        */
        MyString & operator=(const MyString  &m) ;
        /*
        * @fn - operator+
        * @brief - dodaje tekst do MyStringa
        * @return - MyString zawierajacy polaczony tekst
        */
        // MyString operator+(const char *toAdd) const;
        MyString operator+(const MyString &toAdd) const;
        /*
        * @fn - operator*
        * @brief - funckja mnozaca MyString o podana ilosc razy (globalna aby mozna bylo pomnozyc 2*MyString)
        * @return - podany MyString * n
        */
        MyString operator*(const int n) const;
        /*
        * @fn - operator[]
        * @brief - ustawia danego chara na pozycji przekazanej w argumencie index
        * @return - MyString ze zmienionym charem na pozycji index
        */
        char& operator[](const int &index);
private:
        char* _txt;
};
