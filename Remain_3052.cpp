#include <iostream>

using namespace std;

int main()
{
  int a[1001] = {0,};
  int tmp;
  for(int i = 0; i< 10; i++)
  {
    cin >> tmp;
    a[tmp%42]++;
  }
  tmp = 0;

  for(int i = 0; i < 1001; i++)
  {
    if(a[i] != 0) tmp++;
  }
  cout << tmp;
  return 0;

}
