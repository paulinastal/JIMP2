//
// Created by Paulina on 16/05/2019.
//
#include <iostream>
#include <algorithm>
#include <iterator>
#include <assert.h>
#include <vector>
#include "DTab.h"

using ::std::cout;

DTab::DTab() {
    tab = new int[10];
    for (int i = 0; i < 10; i++)
        tab[i] = 0;
    length = 10;
    last = 0;
}

DTab::~DTab() {
    delete [] tab;
}

void DTab::add(double element) {
    int *pnewa;
    if (last == length) {
        length = length + 10;
        pnewa = new int[length];
        for (int i = 0; i < last; i++)
            pnewa[i] = tab[i];
        for (int j = last; j < length; j++)
            pnewa[j] = 0;
        delete [] tab;
        tab = pnewa;
    }
    tab[last++] = element;
}

double DTab::get(int index) {
    return tab[index];
}

void DTab::set(double element, int index) {
    assert(index >= 0);
    if (std::find(tab, tab+2, index) == end(tab))
    {
        if (index > last)
            last = index;
        tab[length++] = index;
    }
    tab[index] = element;
}

int DTab::size() {
    return length;
}

void DTab::print() {
    for (int i = 0; i<length; i++)
        std::cout << tab[i] << " ";
}
