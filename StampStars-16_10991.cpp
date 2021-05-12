#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  if(n%2==0)
  {
    for(int i = 1; i <= n; i ++)
    {
      for(int j = 2; j <= n+i; j++)
      {
        if((j-i) % 2 == 0 && n-i < j) cout << "*";
        else cout << " ";
      }
      cout << endl;
    }
  }
  else
  {
    for(int i = 1; i <= n; i ++)
    {
      for(int j = 1; j <= n+i; j++)
      {
        if((j-i) % 2 == 0 && n-i < j) cout << "*";
        else cout << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
