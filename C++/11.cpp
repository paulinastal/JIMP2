#include <iostream>
#include <cmath>
using namespace std;
main ()
{
	float a, b, c, del;
	cout << "podaj wspolczynnik a" << endl;
	cin >> a;
	cout << "podaj wspolczynnik b" << endl;
	cin >> b;
	cout << "podaj wspolczynnik c" << endl;
	cin >> c;
	if (a!=0)
		{	del=b*b-4*a*c;
			if (del>0) {
			cout << "pierwszy pierwiastek =" << (-b+sqrt(del))/(2*a) << endl;
			cout << "drugi pierwiastek =" << ((-b-sqrt(del))/(2*a));
			}
			else if (del==0) cout << "jeden pierwiastek =" << (-b)/(2*a);
			else cout << "rownanie kwadratowe nie ma rozwiazan" ;
	}
	else if (b!=0) cout << "rozwiazanie rownania liniowego" << cout << -c/b;
	else cout << "brak rozwiazan rownania liniowego";
return 0;
}
