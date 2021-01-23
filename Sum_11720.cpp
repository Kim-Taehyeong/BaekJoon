#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  char a[100];
  int n;
  int result = 0;
  cin >> n >> a;
  for (int i = 0; i < n; i++)
  {
    result += (int)a[i] - 48;
  }
  cout << result;
}
