#include <iostream>
using namespace std;
main ()
{
	float suma, ulamek;
	int i,n;
	cout << "program oblicza sume ulamkow 1/2 2/3 3/4 itd.\n";
	cout << "podaj liczbe ulamkow n=\n";
	cin >> n;
	suma=0;
	for (i=1;i<=n;i++)
	{
		ulamek=i/(i+1.0);
		suma=ulamek+suma;
	}
	cout << "\n\nsuma" << n << "poczatkowych ulamkow wynosi" << suma ;
}
