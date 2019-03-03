#include <iostream>
using namespace std;
int licz_silnie(int a)
	{
		int i, s;
		s=1;
		for(i=1; i<=a; i++) s=s*i;
		return s;
	}
int licz_potege(int a, int w)
	{
		int p, i;
		p=1;
		for(i=1;i<=w;i++) p=p*a;
		return p;
	}
int main()
	{
		int wybor, a ,i,w ,p=1 ,s=1;
		{
			cout << "co liczyc?: silnia-1 potega-2\n";
			cin >> wybor;
			if(wybor==1)
		{
			cout << "podaj liczbe: ";
			cin >> a;
			cout << "silnia z podanej liczby = " << licz_silnie(a) << endl;
	}
	if(wybor==2)
	{	
	cout << "podaj podstawe: ";
	cin >> a;
	cout << "podaj wykladnik: ";
	cin >> w;
	cout << "potega wynosi = " << licz_potege(a,w) << endl;
	}
	else if(wybor!=1&&wybor!=2)
	{
	cout << "zly wybor";
	}
	}
return 0;
	}
