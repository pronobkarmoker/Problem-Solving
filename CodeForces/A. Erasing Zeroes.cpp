#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        int cnt = 0;
        cin >> s;
        if (s.find("0") == -1)
        {
            cout << 0 << endl;
            continue;
        }
        if (s.find("1") == -1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                while (s[i + 1] == '0' && s.find("1", i + 1) != -1 && i < s.size())
                {
                    cnt++;
                    i++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}