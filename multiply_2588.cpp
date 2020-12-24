#include <iostream>

using namespace std;

int main()
{
  int x,y;
  cin >> x >> y;

  int H,T,O;
  O = y % 10;
  T = (y/10) % 10;
  H = (y/100) % 10;
  printf("%d\n", O*x);
  printf("%d\n", T*x);
  printf("%d\n", H*x);
  printf("%d\n", x*y);
  return 0;
}
