
#include <iostream>
using namespace std;

int main()
{
    int n;
    int silnia=1;
    cout << "jaka silnie chcesz obliczyc?" << endl;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        silnia=silnia*i;
    }
    cout << silnia;
    return 0;
}
