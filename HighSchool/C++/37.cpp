#include <iostream>
using namespace std;
main ()
{
	int kod, proba;
	proba=1;
haslo:
	cout << "podaj PIN\n";
	 cin >> kod;
	if (kod==1234) cout << "kod poprawny";
	 	else {
		cout << "zly kod\n";
		if (proba<3)
	 	{
	 		proba++;
	 		cout << proba << "raz";
	 		goto haslo;
		 }
		 else cout << "karta zatrzymana";
	}
	
}
