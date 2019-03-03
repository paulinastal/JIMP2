#include <iostream>
using namespace std;
float kolo(float promien)
{
	return 3.14*promien*promien;
}
float trojkat(float podstawa, float wysokosc)
{
	return podstawa*wysokosc/2;
}
float prostokat(float bok1, float bok2)
{
	return bok1*bok2;
}
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
		cout << "pole kola wynosi" << kolo(r);
		break;
		case 2:
		cout << "podaj dlugosc podstawy";
		cin >> r;
		cout << "podaj wysokosc trojkata";
		cin >> h;
		cout << "pole trojkata wynosi " << trojkat(r,h);
		break;
		case 3:
		cout << "podaj pierwszy bok";
		cin >> r;
		cout << "podaj drugi bok";
		cin >> h;
		cout << "pole prostokata wynosi " << prostokat(r,h);
		break;
		default: cout << "nie ma takiej figury";
}
	return 0;
}
