#include <bits/stdc++.h>
using namespace std;

signed main()
{

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 && s[i] == '9')
            continue;

        if (s[i] - '0' > (9 - (s[i] - '0')))
        {
            s[i] = '0' + (9 - (s[i] - '0'));
        }
    }
    cout << s << '\n';

    return 0;
}
