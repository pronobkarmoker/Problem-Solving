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

        int x = 1;

        while (n--)
        {
            cout << x << " ";
            x += 2;
        }

        cout << "\n";
    }
}