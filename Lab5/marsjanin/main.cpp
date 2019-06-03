#include <iostream>
#include <ctime>
#include <vector>
#include "marsjanin.h"
#include <conio.h>

int main() {
    srand(time(nullptr));
    std::vector<marsjanin *> marsjanie;

    while (true) {
        marsjanie.push_back(new marsjanin());

        if (marsjanin::liczbaMarsjan <= 5) {
            std::cout << "Marsjanie się chowają" << std::endl;
            _sleep(500);
            continue;
        }

        for (int i = 0; i < marsjanin::liczbaMarsjan; i++) {
            if (!marsjanie[i]->atakuj()) {
                delete marsjanie[i];
                marsjanie.erase(marsjanie.begin() + i);
            }
        }

        std::cout << "Marsjanie zaatakowani! Pozostało już tylko: " << marsjanie.size() << std::endl;
        _sleep(500);
    }

    return 0;
}