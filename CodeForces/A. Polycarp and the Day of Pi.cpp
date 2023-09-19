#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s = "314159265358979323846264338327";
        string ip;
        cin >> ip;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (ip[i] == s[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}