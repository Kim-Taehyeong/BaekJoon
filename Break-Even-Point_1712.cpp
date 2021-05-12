#include <iostream>

using namespace std;

int main()
{
    unsigned int A, B, C;
    unsigned int result;
    cin >> A >> B >> C;

    for (int i = 1; ; i++)
    {
        if (C<B)
        {
            result = -1;
            break;
        }
        if (A + (i * B) < C * i)
        {
            result = i;
            break;
        }

    }
    cout << result;
}
