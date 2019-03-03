#include <iostream>
using namespace std;
main()
{
int liczba, dzielnik, n=0;
cout << "podaj liczbe";
cin >> liczba;
for(dzielnik=2; dzielnik<liczba; dzielnik++)
	if(liczba%dzielnik==0) n++;
if (n==0) cout << "liczba pierwsza";
else cout << "liczba zlozona";
return 0;
}
