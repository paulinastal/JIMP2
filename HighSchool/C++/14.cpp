#include <iostream>
using namespace std;
main()
{
int i, j, ile;
cout << "ile gwiazdek?";
cin >> ile;
cout << endl;
for(i=1;i<=ile;i++)
{
	for(j=ile;j>=i;j--)
	{
		cout << " ";
	}
	for(j=1;j<=i;j++)
	{
	cout << "* ";
}
cout << endl << endl;
}
return 0;
}
