#include <iostream>
using namespace std;
main()
{
	int liczba, dzielnik, licznik = 0;
	cout << "podaj liczbe";
	cin >> liczba;
	for (dzielnik=2; dzielnik<liczba; dzielnik++)
	{
	if(liczba%dzielnik==0) licznik++;
}
if (licznik==0) cout << "\nliczna pierwsza";
else cout << "\nliczba zlozona";
return 0;
}
