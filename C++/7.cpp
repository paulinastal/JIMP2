#include <iostream>
using namespace std;
int main ()
{
	float a,b,c,i,ilosc;
	cout << "wypisuje n pierwszych liczb fibonacciego";
	cout << "ile liczb? ";
	cin >> ilosc;
	a=1;
	b=1;
	i=2;
	cout << a << "\n";
	cout << b << "\n";
	while (i<ilosc)
		{
			c=a+b;
			a=b;
			b=c;
			i++;
			cout << c << "\n";
		}
return 0;
}
