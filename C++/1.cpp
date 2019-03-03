#include <iostream>
using namespace std;
main()
{
	int x, a;
	cout << "podaj liczbe\n";
	cin >> x;
	cout << "cyfry z podanej liczby od konca:\n";
	while (x!=0)
		{
			a=x%10;
			x=x/10;
			cout << a << " ";
		}
return 0;	
}
