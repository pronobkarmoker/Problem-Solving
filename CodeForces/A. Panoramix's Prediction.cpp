#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool ans = false;
    int num = 0;
    for (int i = n + 1; i <= m; i++)
    {
        int prime = true;
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            ans = true;
            num = i;
            break;
        }
    }
    if (ans && num == m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}