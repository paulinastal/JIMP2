#include <iostream>
using namespace std;
main ()
{
	int liczba1, liczba2;
	cout << "prosty kalkulator" << endl;
	string dzialanie;
	cout << "podaj pierwsza liczbe" << endl;
	cin >> liczba1;
	cout << "podaj druga liczbe" << endl;
	cin >> liczba2;
	cout << "wybierz dzialanie: s-suma, r-roznica, d-dzielenie, m-mnozenie" << endl;
	cin >> dzialanie;
	cout; {
	if (dzialanie=="s") cout << "suma="<< liczba1+liczba2 << endl;
	if (dzialanie=="r") cout << "roznica="<< liczba1-liczba2 << endl;
	if (dzialanie=="d") cout << "dzielenie=";
	if (liczba2==0) cout << "0 w mianowniku" << endl;
	else cout << liczba1/liczba2 << endl;
	if (dzialanie=="m") cout << "mnozenie=" << liczba1*liczba2;}
	return 0;
}
