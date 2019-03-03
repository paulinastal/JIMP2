#include <iostream>
using namespace std;
main()
{
		int liczba;
		cout << "podaj liczbe calkowita";
		cin >> liczba;
		{
			if (liczba==1 || liczba==2 || liczba==3 || liczba==4 || liczba==5 )
			{
		switch (liczba)
			{
				case 1:
					cout << "jeden";
					break;
				case 2:
					cout << "dwa";
					break;
				case 3:
					cout << "trzy";
					break;
				case 4:
					cout << "cztery";
					break;
				case 5:
					cout << "piêc";
					break;
			}
		}
		else cout << " liczba nie z tego zakresu";
	}
	return 0;
}
