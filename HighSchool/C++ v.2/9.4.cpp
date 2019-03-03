#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{

int i, ile, zakres;
cout << "podaj gorna granice: ";
cin >> zakres;
srand(time(NULL));
cout << "zakres = 1 -" << zakres << endl;
cout << "ile losowan?";
cin>>ile;
for (i=1; i<=ile; i++) cout << rand()%(zakres-1) + 1 << " ";
	return 0;
}
