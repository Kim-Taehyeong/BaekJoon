#include <iostream>

using namespace std;

int main()
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  for(int i = 0; i < n; i ++)
  {
    int x,y;
    cin >> x >> y;
    cout << x+y << '\n';
  }

}
