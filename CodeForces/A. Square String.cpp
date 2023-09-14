#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] - s[i + (s.length() / 2)] == 0)
            {
                count++;
            }
        }
        if (s.length() % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (count == s.length() / 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}