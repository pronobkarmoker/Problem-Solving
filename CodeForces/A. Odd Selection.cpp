#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, x;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> x;

        vector<int> a(n);
        int odd_cnt = 0, even_cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even_cnt++;
            }
            else
            {
                odd_cnt++;
            }
        }

        if (odd_cnt == 0 || (x % 2 == 0 && even_cnt == 0) || (x == n && odd_cnt % 2 == 0))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
