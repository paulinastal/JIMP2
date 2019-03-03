#include <iostream>
using namespace std;
main()
{
	float n, x, a, w, i;
	cout << "obliczam wartosc wielomianu stopnia n w punkckcie x\n";
	cout << "podaj stopien wielomianu";
	cin >> n;
	cout << "podaj punkt x";
	cin >> x;
	cout << "podaj pierwszy wyraz wolny";
	cin >> w;
		while (i<n)
		{
		i++;
		cout << "podaj kolejny wyraz wolny ";
		cin >> a;
		w=w*x+a;
		}
	cout << "wartosc wielomianu =" << w;
return 0;
}
