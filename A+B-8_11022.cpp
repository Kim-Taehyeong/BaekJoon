#include <iostream>

using namespace std;

int main()
{
  int n;
  int A, B;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
      cin >> A >> B;
      cout << "Case #" << i+1 << ": " << A << " + " << B << " = " << A+B << endl;
  }
  return 0;
}
