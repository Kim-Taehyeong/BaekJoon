#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < 2*n -1; j++)
    {
      if(i <= j && 2*n-1-i > j) cout << "*";
      else if(j > n) continue;
      else cout << " ";
    }
    cout << endl;
  }
  for(int i = n-2; i >= 0; i--)
  {
    for(int j = 0; j < 2*n -1; j++)
    {
      if(i <= j && 2*n-1-i > j) cout << "*";
      else if(j > n) continue;
      else cout << " ";
    }
    cout << endl;
  }

  return 0;
}
