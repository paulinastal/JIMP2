#include <iostream>
using namespace std;
int euklides(int a, int b)
	{
	while (a!=b) if (a>b) a=a-b;
					else b=b-a;
	return a;
	}
main ()
{
	int a,b;
	cout << "podaj dwie liczby calkowite\n";
	cin >> a >> b;
	cout << "NWP podanych liczb = " << euklides(a,b) << endl;
return 0;
}
