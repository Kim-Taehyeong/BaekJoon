#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  string A,B;
  cin>>A>>B;
  reverse(A.begin(),A.end());
  reverse(B.begin(),B.end());
  if(atoi(A.c_str()) > atoi(B.c_str())) cout << A;
  else cout << B;
}
