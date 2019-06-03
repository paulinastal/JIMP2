//
// Created by Paulina on 20/05/2019.
//
#include "dziecko.h"
#ifndef RODZIC_DZIECKO_RODZIC_H
#define RODZIC_DZIECKO_RODZIC_H
class rodzic
{
private:
    std::string _imie;
    std::string _nazwisko;
    int _wiek;

public:
    rodzic();
    rodzic(std::string imie, std::string nazwisko, int wiek);
    ~rodzic();
    void przepiszDoInnejSzkoly(dziecko &dziecko);
};
#endif //RODZIC_DZIECKO_RODZIC_H
