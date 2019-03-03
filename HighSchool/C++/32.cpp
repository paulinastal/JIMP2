#include <iostream>
using namespace std;
main ()
{
	int sp, sn ,ip ,in, x;

	ip=-1;
	in=0;
	sp=0;
	sn=0;
	while (x!=0)
	{
	cout << "podaj liczbe (zero konczy zabawe); ";
	cin >> x;
	if(x%2==0)
	{
	ip++;
	sp=x+sp;
	}
	else
	{
	in++;
	sn=x+sn;
	}
	}
	cout << "ilosc parzystych " << ip << endl;
	cout << "ilosc nieparzystych " << in << endl;
	cout << "suma parzystych " << sp << endl;
	cout << "suma nieparzystych " << sn << endl;
	return 0;
}
