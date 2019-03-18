#include <iostream>
#include <cstdlib>
using namespace std;

int **utworz(int wiersze, int kolumny);
void wypisz(int **tablica, int w, int k);
void usun(int **tablica, int wiersze);

int main (void)
{
    int w, k;
    int **a;
    int liczba = 1;
    cout << "podaj liczbe wierszy: ";
    cin >> w;
    cout << "podaj Liczbe kolumn: ";
    cin >> k;
    a = utworz(w, k);
    wypisz(a, w, k);
    usun(a, w);
    return 0;
}

int **utworz(int wiersze, int kolumny)
{
    int liczba =1;
    int **tablica = new int *[wiersze]; //alokacja pamieci
    if (!tablica)
	{
   		cout << "blad w alokacji pamieci\n";
   		exit (EXIT_FAILURE);
	}

    for (int i = 0; i < wiersze; ++i)
    {
        tablica[i] = new int[kolumny];  //alokacja pamieci
        for (int j = 0; j < kolumny; ++j) //wpisanie wartosci do tablicy
        {
            tablica[i][j] = liczba;
            liczba++;
        }
    }
    return tablica;
}

void wypisz(int **tablica, int w, int k)
{
    for (int i = 0; i < w; ++i, cout << endl)
        for (int j = 0; j < k; ++j)
            cout << tablica[i][j] << '\t';
}

void usun(int **tablica, int wiersze)
{
    for (int i(0); i < wiersze; ++i)
    {
        delete[] tablica[i]; //uwolnienie pamieci
    }
    delete[] tablica; //uwolnienie pamieci
    tablica = NULL;
}




