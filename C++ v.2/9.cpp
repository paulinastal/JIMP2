#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
	srand(time(NULL));
	cout << RAND_MAX << endl;
	cout << rand() <<endl;
return 0;
}
