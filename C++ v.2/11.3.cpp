#include <iostream>
using namespace std;
int main()
{
long long int a=1, b=1, i=2, c, cel;
cout << "wskazana liczba Fibonacciego\n";
cout << "ktora liczba? (min trzecia) ";
cin >> cel;
while (i<cel);
{
i++;
c=a+b;
a=b;
b=c;
}
cout << "wzkazana liczba to " << c << endl;
return 0;
}
