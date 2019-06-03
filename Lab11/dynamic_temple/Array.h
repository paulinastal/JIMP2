//
// Created by Paulina on 30/05/2019.
//

#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

template<class T>
class Array {
private:
    T *pa;
    int length;
    int nextIndex;
public:
    Array();
    ~Array();
    T& operator[](int index);
    void add(int val);
    int size();
};

template <class T>
Array<T>::Array(){
    pa = new T[10];
    for (int i = 0; i < 10; i++)
        pa[i] = 0;
    length = 10;
    nextIndex = 0;
}

template <class T>
Array<T>::~Array() {
    delete [] pa;
}

template <class T>
T& Array<T>::operator[](int index) {
    T *pnewa;
    if (index >= length) {
        pnewa = new T[index + 10];
        for (int i = 0; i < nextIndex; i++)
            pnewa[i] = pa[i];
        for (int j = nextIndex; j < index + 10; j++)
            pnewa[j] = 0;
        length = index + 10;
        delete [] pa;
        pa = pnewa;
    }
    if (index > nextIndex)
        nextIndex = index + 1;
    return *(pa + index);
}

template <class T>
void Array<T>::add(int val) {
    T *pnewa;
    if (nextIndex == length) {
        length = length + 10;
        pnewa = new T[length];
        for (int i = 0; i < nextIndex; i++)
            pnewa[i] = pa[i];
        for (int j = nextIndex; j < length; j++)
            pnewa[j] = 0;
        delete [] pa;
        pa = pnewa;
    }
    pa[nextIndex++] = val;
}

template <class T>
int Array<T>::size() {
    return length;
}

#endif //ARRAY_ARRAY_H
