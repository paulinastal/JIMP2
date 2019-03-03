#include <iostream>
using namespace std;
main()
{
	int liczba, dzielnik, licznik = 0;
	cout << "podaj liczbe";
	cin >> liczba;
	cout << "\nDzielniki:\n";
	for (dzielnik=1; dzielnik<=liczba; dzielnik++)
	{
	if(liczba%dzielnik==0)
	{
	cout.width(9);
	cout << dzielnik << ",";
	licznik++;
	}
}
cout << "\n liczba dzielnikow" << licznik;
return 0;
}
