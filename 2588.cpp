#include <iostream>

using namespace std;

int main(void)
{
  int a, b, tmp;
  cin >> a >> b;
  tmp = b;
  for(int i = 0; i < 3; i++)
  {
    printf("%d\n",(tmp % 10) * a);
    tmp /= 10;
  }
  printf("%d", a*b);
}
