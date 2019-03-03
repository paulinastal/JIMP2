#include <iostream>
using namespace std;
main()
{
int suma=0, a, liczba;
cout << "podaj liczbe";
cin >> liczba;
while (liczba!=0)
{
	a=liczba%10;
	suma=suma+a;
	liczba=liczba/10;
}
cout << "suma cyfr liczby = " << suma;
return 0;
}
