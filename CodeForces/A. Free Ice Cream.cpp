#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t, d = 0;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        char c;
        int x;
        cin >> c >> x;
        if (c == '+')
            t += x;
        else
        {
            if (t - x >= 0)
                t -= x;
            else
                d++;
        }
    }
    cout << t << " " << d;
}