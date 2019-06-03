//
// Created by Paulina on 16/05/2019.
//

#ifndef DTAB_DTAB_H
#define DTAB_DTAB_H
class DTab{
private:
    int * tab;
    int length;
    int last;

    void resize(int newSize);
public:

    DTab();
    DTab(int initLength);
    ~DTab();

    void add(double element);
    double get(int index);
    void set(double element, int index);
    void print();
    int size();
};
#endif //DTAB_DTAB_H
