#include <iostream>
using namespace std;

int factorial(int n);
int main(void)
{
  int a;
  cout << "jaka silnie chcesz obliczyc? ";
  cin >> a;
  cout << factorial(a);
  return 0;
}

int factorial(int n)
{
  int number=1;
  for(int i=1;i<=n;i++)
  {
    number*=i;
  }
  return number;
}
