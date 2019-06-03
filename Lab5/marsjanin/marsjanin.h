//
// Created by Paulina on 21/05/2019.
//
#ifndef MARSJANIN_MARSJANIN_H
#define MARSJANIN_MARSJANIN_H

class marsjanin{
public:
    marsjanin();
    ~marsjanin();
    static int liczbaMarsjan;
    static const int szanse_na_pokonanie;
    bool atakuj();
private:
    int losowa_liczba(int min, int max);
};

#endif //MARSJANIN_MARSJANIN_H
