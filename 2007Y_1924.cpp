#include <iostream>

using namespace std;

int main()
{
  int x;
  int Dsum = 0;
  cin >> x >> Dsum;
  int a[7] = {1,3,5,7,8,10,12};
  int b[4] = {4,6,9,11};

  for(int i = 1; i < x; i++)
  {
    for(int j = 0; j < 7; j++)
    {
      if(i == a[j]) Dsum += 31;
    }
    for(int j = 0; j < 4; j++)
    {
      if(i == b[j]) Dsum += 30;
    }
    if(i == 2) Dsum += 28;
  }

  if(Dsum % 7 == 0) cout << "SUN";
  else if(Dsum % 7 == 1) cout << "MON";
  else if(Dsum % 7 == 2) cout << "TUE";
  else if(Dsum % 7 == 3) cout << "WED";
  else if(Dsum % 7 == 4) cout << "THU";
  else if(Dsum % 7 == 5) cout << "FRI";
  else if(Dsum % 7 == 6) cout << "SAT";

  return 0;
}
