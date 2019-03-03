#include <iostream>
using namespace std;
main ()
{
int i,suma;
suma=0;
for ( i=1; i<=3000; i++)
if (i%2==0 && i%5==0) suma=suma+i;
cout << "suma liczb podzielnych przez 5 i 2 z zakresu 1-3000 wynosi: "<< suma;
return 0;
}
