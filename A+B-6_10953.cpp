#include <iostream>

using namespace std;

int main()
{
  int n;
  int A,B;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    scanf("%d,%d", &A, &B);
    cout << A + B << endl;
  }
  return 0;
}
