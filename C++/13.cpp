#include <iostream>
using namespace std;
main()
{
	int i, j, rozmiar;
	string decyzja;
	cout << "podaj rozmiar tabliczki mnozenia";
	cin >> rozmiar;
	cout << endl;
	for (i=1;i<=rozmiar;i++)
	{
		for(j=1;j<=rozmiar;j++)
		{
		cout.width(4);
		cout << i*j;
		}
		cout << endl << endl;
}
cout << "czy odwrocic? (t/n)";
cin >> decyzja;
cout << endl;
if(decyzja=="t")
	{
	cout << "prosze bardzo" << endl << endl;
	for(i=rozmiar;i>=1;i=i-1)
	{
		for(j=rozmiar;j>=1;j=j-1)
		{
			cout.width(4);
			cout << i*j;	
		}
		cout << endl << endl;
	}
}
	else cout << "jak nie to nara";
	return 0;
}
