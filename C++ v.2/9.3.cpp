#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
float tab_a[1000], tab_b[1000];
int i, ile;
srand(time(NULL));
cout << "ile losowan?";
cin >> ile;
for (i=1;i<ile;i++)
{
	tab_a[i]= rand();
		tab_b[i]= 1.0*rand()/RAND_MAX;
	cout.width(5);
	cout << tab_a[i] << " | " << tab_b[i] << endl;
}
	return 0;
}
