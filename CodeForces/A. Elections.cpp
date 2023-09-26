#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long long a, b, c;

        cin >> a >> b >> c;

        int maxa = max(b, c) - a + 1;
        int maxb = max(a, c) - b + 1;
        int maxc = max(b, a) - c + 1;

        cout << max(maxa, 0) << " " << max(maxb, 0) << " " << max(maxc, 0) << endl;
    }

    return 0;
}
