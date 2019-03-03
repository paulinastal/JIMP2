#include <iostream>
using namespace std;
main()
{
int a, b, c, i, numer, liczba, dzielnik, n=0, suma=0;
cout << "ktora liczba?  ";
	cin >> numer;
	a=1;
	b=1;
	i=2;
	if (numer==1 || numer ==2) cout << "wskazana liczba to 1";
	else
	{
	for (i=3;i<=numer;i++)
		{
		c=a+b;
		a=b;
		b=c;
	}
	cout << "wskazana liczba to \n" << c << "\n";
	}
while (c!=0)
{
	a=c%10;
	suma=suma+a;
	c=c/10;
}
cout << "suma cyfr liczby = " << suma;
for(dzielnik=2; dzielnik<suma; dzielnik++)
	if(suma%dzielnik==0) n++;
if (n==0) cout << endl << "liczba pierwsza";
else cout << endl << "liczba zlozona";
return 0;
}
