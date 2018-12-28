#include "MyString.h"
#include <iostream>
#include <string.h>


MyString::MyString(const char* txt){
        _txt = new char[strlen(txt) +1];
        strcpy(_txt,txt);
}

MyString::~MyString(){
        delete [] _txt;
}

bool MyString::operator==(const MyString &toCmp) const{
        if(strcmp(_txt,toCmp._txt)) return false;
        else return true;
}

MyString & MyString::operator=(const MyString  &m){
        if(this == &m){
                return *this;
        }
        delete [] _txt;
        int len = strlen(m._txt) + 1;
        _txt = new char [len];
        strcpy(_txt,m._txt);
        return *this;
}

MyString MyString::operator+(const MyString &toAdd) const{
        int len = 0;
        len += strlen(toAdd._txt);
        len += strlen(_txt);
        len += 1;
        char *temp = new char[len];
        strcpy(temp,_txt);
        strcat(temp,toAdd._txt);
        MyString tmp(temp);
        delete []temp;
        return tmp;
}

MyString operator*(const int n, const MyString& m){
        return m*n;
}

MyString MyString::operator*(const int n) const{
        int len = 0;
        len += strlen(_txt);
        len *= n;
        len += 1;
        char*temp = new char[len];
        strcpy(temp,_txt);
        for(int i = 1; i < n; i++){
                strcat(temp,_txt);
        }
        MyString tmp(temp);
        delete []temp;
        return tmp;
}

char& MyString::operator[](const int& index){
        return _txt[index];
}
