#include <iostream>
using namespace std;
main()
{
	int n, i ;
	double s;
	s=1;
	cout << "podaj liczbe: ";
	cin >>n;
	for(i=1;i<=n;i++) s=s*i;
	cout << endl << "silnia podanej liczby = " << s;
	return 0;
}
