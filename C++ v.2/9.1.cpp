#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
	int i, ile;
	srand(time(NULL));
	cout << RAND_MAX << endl;
	cout << "ile losowan?\n";
	cin >> ile;
	for (i=1; i<=ile; i++)
	cout << rand() << endl;
return 0;
}
