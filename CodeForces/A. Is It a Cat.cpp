#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;

    while (t--)
    {
        int c1 = 0, c2 = 0, c3 = 0, c4 = 1;
        cin >> n;
        string a;
        cin >> a;

        for (i = 0; i < n; i++)
            a[i] = tolower(a[i]);

        for (i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                if (a[i] == 'm' && a[i + 1] == 'e')
                    c1 = 1;
                else if (a[i] == 'e' && a[i + 1] == 'o')
                    c2 = 1;
                else if (a[i] == 'o' && a[i + 1] == 'w')
                    c3 = 1;
                else if (a[i] != 'm' || a[i] != 'e' || a[i] != 'o' || a[i] != 'w')
                    c4 = 0;
            }
        }
        if (c1 == 0 || c2 == 0 || c3 == 0 || c4 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
