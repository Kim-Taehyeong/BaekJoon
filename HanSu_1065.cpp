#include <iostream>

using namespace std;

int Han_Su(int n)
{
  int cnt = 0;
  int a,b,c;

  for (int i = 1; i <= n; i++)
  {
    if(i < 100) cnt++;
    else if(i < 1000)
    {
      a = i%10;
      b = (i/10) % 10;
      c = i/100;
      if(b-a == c-b) cnt++;
    }
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;
  cout << Han_Su(n);
  return 0;
}
