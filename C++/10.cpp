#include <iostream>
using namespace std;
main ()
{
	float a, b;
	cout << "podaj wspolczynnik a" << endl;
	cin >> a;
	cout << "podaj wspolczynnik b" << endl;
	cin >> b;
	if (a!=0)cout << "rozwiazanie rownania liniowego x=" <<-b/a;
			else cout << "brak rozwiazan";
return 0;
}
