#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, t, min;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        min = n / 3 + 1;
        if (n == 1)
        {
            cout << "2" << endl;
        }
        else if (n % 3 == 0)
        {
            cout << n / 3 << endl;
        }
        else if (n % 2 == 0)
        {
            if (n / 2 < min)
                cout << n / 2 << endl;
            else
                cout << n / 3 + 1 << endl;
            ;
        }
        else
            cout << n / 3 + 1 << endl;
    }
    return 0;
}