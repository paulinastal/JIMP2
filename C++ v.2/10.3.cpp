#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
srand(time(NULL));
float liczba, i;
for (i=1; i<=6; i++)
{
	liczba=5*rand()/RAND_MAX+5;
	cout << liczba << endl;
}
return 0;
}
