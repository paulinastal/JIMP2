//
// Created by Paulina on 20/05/2019.
//

#ifndef RODZIC_DZIECKO_DZIECKO_H
#define RODZIC_DZIECKO_DZIECKO_H
class dziecko
{
private:
    std::string _imie;
    std::string _nazwisko;
    int _wiek;
    std::string _szkola;

public:
    dziecko();
    dziecko(std::string imie, std::string nazwisko, int wiek, std::string szkola);
    ~dziecko();

    friend class rodzic;
};
#endif //RODZIC_DZIECKO_DZIECKO_H
