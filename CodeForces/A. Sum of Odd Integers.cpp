#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n / k >= k)
        {
            if (n % 2 == 0 && k % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else if (n % 2 == 1 && k % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
