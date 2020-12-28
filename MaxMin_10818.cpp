#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a;
  int Max = -99999999, Min = 99999999;
  for(int i = 0; i< n; i++)
  {
    cin >> a;
    if(a > Max) Max = a;
    if(a < Min) Min = a;
  }
  cout << Min << " " << Max;
  return 0;
}
