//
// Created by Paulina on 20/05/2019.
//
#include<iostream>
#include<string>
#include "rodzic.h"
#include "dziecko.h"

using std::string;

rodzic::rodzic(string imie, string nazwisko, int wiek)
{
_imie = imie;
_nazwisko = nazwisko;
_wiek = wiek;
}

void rodzic::przepiszDoInnejSzkoly(dziecko &dziecko) {
    string nowa;
    std::cout << "podaj nowa szkole: " << std::endl;
    std::cin >> dziecko._szkola;
}
rodzic::~rodzic(){}
