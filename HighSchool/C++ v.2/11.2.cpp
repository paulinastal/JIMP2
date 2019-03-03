#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
int i, ile, zakres;
cout << "podaj gorna granice: ";
cin >> zakres;
srand(time(NULL));
cout << "zakres = 0 - " << zakres << endl;
cout << "ile losowan? ";
cin >> ile;
for(i=1; i<=ile; i++)
cout << setw(4) << rand()%(zakres-1) + 1 << " ";
return 0;
}
