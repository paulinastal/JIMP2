//
// Created by Paulina on 20/05/2019.
//
#include<iostream>
#include<string>
#include "dziecko.h"

using std::string;

dziecko::dziecko(string imie, string nazwisko, int wiek, string szkola)
{
    _imie = imie;
    _nazwisko = nazwisko;
    _wiek = wiek;
    _szkola = szkola;
}

dziecko::~dziecko(){}