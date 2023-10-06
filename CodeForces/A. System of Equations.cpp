#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int a = 0; a <= n; a++)
    {
        for (int b = 0; b <= m; b++)
        {
            int equ = (a * a) + b;
            int equ2 = a + (b * b);
            if (equ == n && equ2 == m)
                count++;
        }
    }

    cout << count << endl;
}
