#include <iostream>
using namespace std;
main()
{
int liczba, dzielnik, n=0, suma=0, a;
cout << "podaj liczbe";
cin >> liczba;
while (liczba!=0)
{
	a=liczba%10;
	suma=suma+a;
	liczba=liczba/10;
}
cout << "suma cyfr liczby = " << suma;
for(dzielnik=2; dzielnik<suma; dzielnik++)
	if(suma%dzielnik==0) n++;
if (n==0) cout << "liczba pierwsza";
else cout << "liczba zlozona";
return 0;
}

