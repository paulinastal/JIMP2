#include <iostream>
using namespace std;
main ()
{
float ocena, liczba, suma, srednia;
cout << "podaj liczbe ocen";
cin >> liczba;
suma=0;
for (int i=1;i<=liczba;i++)
{
	cout << "podaj ocene";
	cin >> ocena;
	suma=suma+ocena;
}
	srednia=suma/liczba;
	if (srednia>=1 && srednia <1.5) cout << "niedostateczny";
	else	if (srednia>=1.5 && srednia<2.5) cout << "dopuszczajacy";
		else	if (srednia>=2.5 && srednia<3.5) cout << "dostateczny";
			else	if (srednia>=3.5 && srednia<4.5) cout << "dobry";
				else	if (srednia>=4.5 && srednia<5.5) cout << "bardzo dobry";
					else	if (srednia>=5.5 && srednia<=6) cout << "celujacy";
						else cout << "cos jest nie tak";
return 0;
}
