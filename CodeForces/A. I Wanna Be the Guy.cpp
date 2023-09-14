#include <iostream>
using namespace std;
int main()
{
    int v[101] = {0}, n, p, q, ok = 1, i, x;
    cin >> n >> p;
    for (i = 1; i <= p; i++)
    {
        cin >> x;
        v[x]++;
    }
    cin >> q;
    for (i = 1; i <= q; i++)
    {
        cin >> x;
        v[x]++;
    }
    for (i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            ok = 0;
        }
    }
    if (ok == 1)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}