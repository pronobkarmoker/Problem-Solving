#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long int sum = 0;
    for (int i = 0; i < n - 1; i += 2)
    {
        sum += arr[i + 1] - arr[i];
    }
    cout << sum << endl;
    return 0;
}