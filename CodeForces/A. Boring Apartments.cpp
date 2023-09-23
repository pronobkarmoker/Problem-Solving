#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, b = 0;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> x;
        b = 10 * ((x % 10) - 1);
        for (int i = 1; x > 0; i++)
        {
            b += i;
            x /= 10;
        }
        cout << b << endl;
    }
    return 0;
}