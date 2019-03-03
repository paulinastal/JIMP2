#include <iostream>
using namespace std;
main()
{
		int liczba;
		cout << "podaj liczbe calkowita od 1 do 5 \n";
		cin >> liczba;
		if (liczba==1) cout << "jeden";
			else if (liczba==2) cout << "dwa";
				else if (liczba==3) cout << "trzy";
					else if (liczba==4) cout << "cztery";
						else if (liczba==5) cout << "piêæ";
							else cout << "liczba podana spoza zakresu";
	return 0;
}
