#include<iostream>
using namespace std;
int main()
{
  int n, i;
  bool isPrime = true;
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "si";
  else
      cout << "no";

  return 0;
}
