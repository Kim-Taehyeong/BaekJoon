#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> str;
    char a[101] = "";
    string b[8] = { "c=" , "c-" , "dz=" , "d-" , "lj", "nj", "s=", "z=" };
    int cnt = 0;
    int chk = 0;
    cin >> a;
    int i = 0;
    while (a[i])
    {
        str.push_back(a[i]);
        i++;
    }

    while (str.size())
    {
        chk = 0;
        for (int j = 0; j < 8; j++)
        {
            if (str[0] == b[j][0])
            {
                if (str.size() > 1 && str[1] == b[j][1])
                {
                    if (str.size() > 2 && str[1] == 'z' && str[2] == '=') str.erase(str.begin(), str.begin() + 3);
                    else if (str.size() > 2 && str[1] == 'z' && str[2] != '=') continue;
                    else if (str[1] == 'z') continue;
                    else str.erase(str.begin(), str.begin() + 2);
                    cnt++;
                    chk = -1;
                    break;
                }
            }
        }
        if (chk == 0)
        {
            cnt++;
            str.erase(str.begin());
        }
    }

    cout << cnt;
    return 0;
}
