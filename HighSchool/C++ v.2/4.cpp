#include <iostream>
using namespace std;
main()
{
	float tab[25][25];
	int i,j,rozmiar,kierunek;
	cout << "podaj rozmiar tabliczki mnozenia max 20";
	cin >> rozmiar;
		for(i=1; i<=rozmiar;i++)
			for(j=1;j<=rozmiar;j++)
				tab[i][j]=i*j;
	cout << "wybierz kierunek 1-od poczatku, 2- od konca";
	cin>> kierunek;
	cout << endl;
		if(kierunek==1)
		{
			for(i=1; i<=rozmiar;i++)
			{
				for(j=1;j<=rozmiar;j++)
				{
					cout.width(4);
					cout<<tab[i][j];
				}
				cout <<endl <<endl;
			}
		}
		else
		if(kierunek==2)
	{
			for(i=rozmiar; i>=1;i--)
			{
				for(j=rozmiar;j>=1;j--)
				{
					cout.width(4);
					cout<<tab[i][j];
				}
				cout <<endl <<endl;
			}
		}
}
