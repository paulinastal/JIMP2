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
int liczba1, liczba2, dzialanie;
cout << "wybierz dzialanie: 1-dodawanie, 2-odejmowanie, 3-mnozenie, 4-dzielenie\n";
cin >> dzialanie;
if (dzialanie !=1 && dzialanie !=2 && dzialanie !=3 && dzialanie !=4) cout << "tego nie licze";
else {
	cout << "podaj pierwsza liczbe\n";
	cin >> liczba1;
	cout << "podaj druga liczbe\n";
	cin >> liczba2;
	switch(dzialanie)
	{
		case 1:
			cout << "suma podanych liczb = " << dodaj(liczba1, liczba2) << endl;
			break;
				case 2:
					cout << "roznica podanych liczb = " << odejmij(liczba1, liczba2) << endl;
					break;
						case 3:
							cout << "iloczyn podanych liczb = " << pomnoz(liczba1, liczba2) << endl;
							break;
								case 4:
									if (liczba2 !=0) cout << "iloraz podanych liczb = " << podziel(liczba1, liczba2) << endl;
										else cout << "zero w mianowniku - nie licze";
									break;
	}
	}
}
