#include <iostream>
using namespace std;
float kula(float promien)
{
	return 4*3.14*promien*promien/3;
}
float stozek(float promien,float wysokosc)
{
	return 3.14*promien*promien*wysokosc/3;
}
float prostopadloscian(float bok1, float bok2, float bok3)
{
	return bok1*bok2*bok3;
}
main()
{
float a,r,h;
int bryla;
cout << "wybierz bryle 1-kula, 2-stozek, 3-prostopadloscian \n";
cin >> bryla;
if (bryla==1 || bryla==2 || bryla==3)
{
		switch(bryla)
		{
			case 1:
			cout << "podaj promien kuli\n";
			cin >> r;
			cout << "objetosc kuli = " << kula(r);
			break;
			case 2:
			cout << "podaj promien podstawy\n";
			cin >> r;
			cout << "podaj wysokosc stozka\n";
			cin >> h;
			cout << "objetosc stozka = " << stozek(r,h);
			break;
			case 3:
			cout << "podaj krawedz podstawy\n";
			cin >> r;
			cout << "podaj druga krawedz podstawy\n";
			cin >> a;
			cout << "podaj wysokosc prostopadloscianu\n";
			cin >> h;
			cout << "objetosc prostopadloscianu = " << prostopadloscian(r,a,h);
			break;
		}
		}
	}
