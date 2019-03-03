#include <iostream>
using namespace std;
main ()
{
	int a,b;
	cout << "podaj dwie liczby calkowite\n";
	cin >> a >> b;
	while (a!=b) if (a>b) a=a-b;
					else b=b-a;
	cout << "NWP podanych liczb = " << b << endl;
return 0;
}
