#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, e;
    cin >> a >> b >> c;

    d = (a + c - 1) / c;
    e = (b + c - 1) / c;
    cout << d * e << endl;
}