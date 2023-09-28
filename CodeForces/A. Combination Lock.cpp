#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    int n;
    cin >> n;
    cin >> s1 >> s2;
    int lock;
    int moves = 0;
    for (int i = 0; i < n; i++)
    {
        lock = abs(s1[i] - s2[i]);
        if (lock > 5)
        {
            moves += (10 - lock);
        }
        else
        {
            moves += lock;
        }
    }
    cout << moves << endl;
    return 0;
}