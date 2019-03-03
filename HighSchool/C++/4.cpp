#include <iostream>
using namespace std;
main()
{
	int i, ile;
	int tab [10];
	cout << "ile liczb? (max 10): ";
	cin >> ile;
	for (i=0;i<ile;i++)
		{
			cout << "podaj liczbe: ";
			cin >> tab[i];
		}
	cout << "oto te liczby: \n\n";
	for (i=0;i<ile;i++) cout << tab[i] << " ";
	cout << "\n\ni w odwrotnej kolejnosci: \n\n";
	for (i=ile-1;i>=0;i--) cout << tab[i] << " ";	
return 0;	
}
