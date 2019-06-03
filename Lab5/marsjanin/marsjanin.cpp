//
// Created by Paulina on 21/05/2019.
//
#include <cstdlib>
#include "marsjanin.h"

int marsjanin::liczbaMarsjan = 0;
const int marsjanin::szanse_na_pokonanie = 15;

marsjanin::marsjanin() {
    ++liczbaMarsjan;
}

marsjanin::~marsjanin() {
    --liczbaMarsjan;
}

bool marsjanin::atakuj() {
    return (losowa_liczba(0, 50) > szanse_na_pokonanie);
}

int marsjanin::losowa_liczba(int min, int max) {
    return (min + (std::rand() % (max - min + 1)));
}