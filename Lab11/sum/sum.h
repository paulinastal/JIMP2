//
// Created by Paulina on 03/06/2019.
//
#include <iostream>
#include <cstdlib>
#include <string>
#include <variant>

#ifndef SUM_SUM_H
#define SUM_SUM_H

template <class T>
class Sum{
private:
    T _a;
    T _b;
public:
    Sum();
    Sum(T a, T b);
    ~Sum();
    T add();
};

template <class T>
Sum<T>::Sum(T a, T b) {
    _a = a;
    _b = b;
}

template <class T>
Sum<T>::~Sum() {}

template <class T>
T Sum<T>::add() {
    if (std::is_same_v<T, std::complex<int>>) {
         std::cout << "wtd";
    }else{
        return _a + _b;
    }

}
#endif //SUM_SUM_H
