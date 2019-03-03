#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
srand(time(NULL));
int t[50], liczba, i=0, j;
liczba=rand();
cout << "losuje liczbe" << RAND_MAX << endl << "zgaduj liczbe";
cin >> t[0];
while (t[i]!=liczba)
{
	if (t[i]>liczba)
{
	cout << "za duzo\n";
	i++;
	 cin >> t[i];
}
	if(t[i]<liczba)
{
	cout << "za malo\n";
	i++;
	cin >> t[i];
}
}
if(t[i]=liczba)

cout << "trafiles liczbe rowna" << liczba;
cout << "ilosc prob =" << i+1 << endl;
cout << "wybierane liczby: ";
	for (j=0;j<i;j++) cout << t[j] << ", ";
	cout << t[i]; 

return 0;
}
