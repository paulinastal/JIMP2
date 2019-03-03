#include <iostream>
using namespace std;
int fib(int liczbafib)
{
	int a, b, c, i, numer;
	a=1;
	b=1;
	i=2;
	if (liczbafib==1 || liczbafib==2) cout << "wskazana liczba to 1";
	else
	{
	for (i=3;i<=liczbafib;i++)
		{
		c=a+b;
		a=b;
		b=c;
	}
	cout << "wskazana liczba to \n" << c << "\n";
	}
}
main()
{
int a;
cout << "start\n";
cout << "ktora liczba?  ";
cin >> a;
cout << fib(a);
return 0;
}

