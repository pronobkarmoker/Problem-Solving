#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    while (n - (n & (-n)) != 0)
        n -= (n & (-n));
    cout << n - 1 << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}