#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0, count1 = 0;
    cin >> t;
    while (t--)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
        {
            count++;
        }
        else if (m < c)
        {
            count1++;
        }
    }
    if (count > count1)
    {
        cout << "Mishka";
    }
    else if (count < count1)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }

    return 0;
}