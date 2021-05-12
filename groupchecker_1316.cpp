#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, cnt = 0;
    int chk = 0;
    string a;
    vector<string> b;
    char temp = ' ';
    map<char, int> c;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        b.push_back(a);
    }

    for (int i = 0; i < b.size(); i++)
    {
        chk = 0;
        temp = ' ';
        c.clear();
        for (int j = 0; j < b[i].size(); j++)
        {
            c[b[i][j]] += 1;
            if (temp == b[i][j] || c[b[i][j]] <= 1)
            {
                temp = b[i][j];
                continue;
            }
            else
            {
                temp = ' ';
                chk = -1;
                break;
            }
        }
        if (chk == 0) cnt++;
    }

    cout << cnt;
}
