#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minimum = min(minimum, abs(A[i]));
    }
    cout << abs(minimum) << endl;

    return 0;
}