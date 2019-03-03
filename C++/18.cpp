#include <iostream>
using namespace std;
main()
{
	int x, i, p, w;
	p=1;
	cout << "podstawa = ";
	cin >> x;
	cout << "wykladnik = ";
	cin >> w;
	if (0==x && 0==w) cout << "symbol nieokreslony";
	else{
		for(i=1;i<=w;i++) p=p*x;
		cout << "potega = " << p;
		}
return 0;
}
