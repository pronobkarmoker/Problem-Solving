#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int i;
        cin >> s;
        sort(s.begin(), s.end());
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}