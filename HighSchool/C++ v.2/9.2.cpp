#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
float tab[200];
int i, ile;
srand(time(NULL));
cout << "zakres=" << RAND_MAX << endl;
cout << "ile losowan?";
cin >> ile;
for (i=1;i<=ile;i++)
{
	tab[i]= 1.0*rand()/RAND_MAX;
	cout << tab[i] << endl;
}
	return 0;
}
