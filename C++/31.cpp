#include <iostream>
using namespace std;
main ()
{
	float max, min ,sum, x, i;
	cout << "podaj liczbe (zero konczy zabawe); ";
	cin >> x;
	i=0;
	max=x;
	min=x;
	sum=x;
	while (x!=0)
	{
	cout << "\n podaj kolejna liczbe: ";
	if(x>max) max=x;
	if(x<min) min=x;
	cin >> x;
	sum=sum+x;
	i++;
	}
	cout << "srednia arytmetyczna podanych liczb= " << 1.0*sum/i << endl;
	cout << "maksimum podanych liczb = " << max << endl;
	cout << "minimum podanych liczb = " << min << endl;
	cout << "ilosc liczb wynosi = " << i << endl;
	return 0;
}
