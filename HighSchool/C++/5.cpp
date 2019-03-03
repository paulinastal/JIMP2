#include <iostream>
using namespace std;
main()
{
	int x, a, tab[10], i=0, j;
	cout << "ile liczbe max 10 cyfr\n ";
	cin >> x;
	cout << "cyfry z podanej liczby od poczatku : \n\n";
	while (x!=0)
	{
			a=x%10;
			tab[i]=a;
			x=x/10;
			i++;
	}
	for (j=i-1;j>=0;j--) cout << tab[j] << " ";
	cout << "\n\ni w odwrotnej kolejnosci: \n\n";
	for (j=0;j<i;j++) cout << tab[j] << " ";	
return 0;	
}
