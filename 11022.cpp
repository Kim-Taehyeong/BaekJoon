#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    printf("Case #%d: %d + %d = %d\n", i+1, x,y,x+y);
  }
}
