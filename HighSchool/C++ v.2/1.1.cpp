#include <iostream>
using namespace std;
int dodaj (int a, int b)
	{
		int wynik= a+b;
		return wynik;
	}
main ()
{
	int liczba1, liczba2;
	cout << "podaj pierwsza liczbe\n";
	cin >> liczba1;
	cout << "podaj druga liczbe\n";
	cin >> liczba2;
	cout << "suma podanych liczb= " << dodaj(liczba1,liczba2);
	return 0;
}
