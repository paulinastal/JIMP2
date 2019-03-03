#include <iostream>
using namespace std;
int suma(int a,int b)
	{
		return a+b;
	}
int roznica(int a,int b)
	{
		return a-b;	
	}
int iloczyn(int a,int b)
	{
		return a*b;
	}
float iloraz(float a,float b)
	{
		return a/b;
	}
main()
	{
		int x, y, dz;
		cout << "podaj liczbe: \n" ;
		cin >> x;
		cout << "podaj druga liczbe: \n" ;
		cin >> y;
		cout << "suma liczb = " << suma(x,y) <<endl;
		cout << "roznica liczb = " << roznica(x,y) <<endl;
		cout << "iloczyn liczb = " << iloczyn(x,y) << endl;
		if(y==0)
		{
		cout << "0 w mianowniku!\n";
		}
		else
		cout << "iloraz liczb = " << iloraz(x,y) << endl;
	}

