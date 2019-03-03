#include <iostream>
using namespace std;
int main()
{
	int a, b, c, i, numer;
	cout << "wypisuje n pierwszych liczb Fibonacciego\n";
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
return 0;	
}
