#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        char ch = 'a';
        for (int i = 0; i < n; i++)
        {
            str.push_back(ch);
            if (ch - 96 == k)
            {
                ch = 'a';
            }
            else
                ch++;
        }
        cout << str << endl;
    }
    return 0;
}