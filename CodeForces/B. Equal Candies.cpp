#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++)
            cin >> num[i];
        sort(num, num + n);
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum = sum + (num[i] - num[0]);
        }
        cout << sum << endl;
    }
}