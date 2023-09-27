#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int a, b, c, p;
    while (t--)
    {
        cin >> p >> a >> b >> c;
        cout << min((a - (p % a)) % a, min((b - (p % b)) % b, (c - (p % c)) % c)) << endl;
    }
    return 0;
}