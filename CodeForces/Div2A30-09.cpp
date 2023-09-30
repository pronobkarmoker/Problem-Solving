// wrong answer

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        // Sort the tools in ascending order
        sort(x.begin(), x.end());

        long long maxTime = 0;

        // Calculate the time required to reach 'a' using all available tools
        for (int i = 0; i < n; i++) {
            if (b <= a) {
                // Calculate the time it takes to reach 'a' using the current tool
                long long time = (a - b + x[i] - 1) / x[i];
                maxTime = max(maxTime, time);
            }
            b += x[i];
        }

        cout << maxTime + 1 << endl;
    }

    return 0;
}
