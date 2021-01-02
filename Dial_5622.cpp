#include <iostream>

using namespace std;

int main()
{
  char a[20] = {' ',};
  int cnt = 0;
  cin >> a;
  for(int i = 0; i < 20; i++)
  {
    if(a[i] == 'A' || a[i] == 'B' || a[i] == 'C') cnt += 3;
    if(a[i] == 'D' || a[i] == 'E' || a[i] == 'F') cnt += 4;
    if(a[i] == 'G' || a[i] == 'H' || a[i] == 'I') cnt += 5;
    if(a[i] == 'J' || a[i] == 'K' || a[i] == 'L') cnt += 6;
    if(a[i] == 'M' || a[i] == 'N' || a[i] == 'O') cnt += 7;
    if(a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S') cnt += 8;
    if(a[i] == 'T' || a[i] == 'U' || a[i] == 'V') cnt += 9;
    if(a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z') cnt += 10;
  }
  cout << cnt;
}
