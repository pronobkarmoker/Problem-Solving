#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 10)
        {
            cout << n << endl;
            continue;
        }
        int sum = 0;
        int a = -1;
        while (n)
        {
            sum++;
            n /= 10;
            if (n % 10 != 0)
            {
                a = n % 10;
            }
        }
        sum--;
        int ans = 9 * sum + a;
        cout << ans << endl;
    }
}
