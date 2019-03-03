#include <iostream>
using namespace std;
int main ()
{
	int n, i, s;
	s=1;
	i=1;
	cout << "licze 2 do potegi n\n";
	cout << "podaj n\n";
	cin >> n;
	while (i<=n)
	{
		i++;
		s=s*2;
	}
	cout << "wynik= " << s;
	return 0;
}

