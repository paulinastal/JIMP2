#include <iostream>
using namespace std;
int dodaj(int a, int b)
{
	return a+b;
}
int odejmij(int a, int b)
{
	return a-b;
}
int pomnoz(int a, int b)
{
	return a*b;
}
float podziel (float a, float b)
{
	return a/b;
}
main()
	{
		string dzialanie;
		int liczba1, liczba2;
		cout << "wybierz dzialanie: s-dodawanie, r-odejmowanie, m-mnozenie, d-dzielenie\n";
		cin >> dzialanie;
		if (dzialanie !="s" && dzialanie !="r" && dzialanie !="m" && dzialanie !="d") cout << "tego nie licze";
		else {
			cout << "podaj pierwsza liczbe\n";
			cin >> liczba1;
			cout << "podaj druga liczbe\n";
			cin >> liczba2;
			if (dzialanie=="s") cout << "suma z podanych liczb = " << dodaj(liczba1, liczba2) << endl;
			if (dzialanie=="r") cout << "roznica z podanych liczb = " << odejmij(liczba1, liczba2) << endl;
			if (dzialanie=="m") cout << "iloczyn z podanych liczb = " << pomnoz(liczba1, liczba2) << endl;
			if (liczba2!=0 && dzialanie=="d") cout << "iloraz z podanych liczb = " << podziel(liczba1, liczba2) << endl;
			else cout << "zero w mianowniku - nie licze";
			}
	}
