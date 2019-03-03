#include <iostream>
using namespace std;
main ()
{
float r,h;
int figura;
cout << "jaka figura? 1-kolo, 2-trojkat, 3-prostokat\n";
cin >> figura;
switch (figura)
{
		case 1:
		cout << "podaj promien kola";
		cin >> r;
		cout << "pole kola wynosi" << 3.14*r*r;
		break;
		case 2:
		cout << "podaj dlugosc podstawy";
		cin >> r;
		cout << "podaj wysokosc trojkata";
		cin >> h;
		cout << "pole trojkata wynosi " << r*h*0.5;
		break;
		case 3:
		cout << "podaj pierwszy bok";
		cin >> r;
		cout << "podaj drugi bok";
		cin >> h;
		cout << "pole prostokata wynosi " << r*h;
		break;
		default: cout << "nie ma takiej figury";
}
	return 0;
}
