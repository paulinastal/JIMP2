#include <iostream>
using namespace std;
main()
{
	int liczba, i, silnia;
	silnia=1;
	i=0;
	cout << "podaj liczbe: ";
	cin >> liczba;
	while (i<liczba)
	{
		i++;
		silnia=silnia*i;
	}
		cout << endl << "silnia podanej liczby = " << silnia;
	return 0;
}
