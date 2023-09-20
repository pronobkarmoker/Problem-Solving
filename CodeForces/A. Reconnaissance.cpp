#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, counter = 0;
    cin >> n >> d;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[i] - arr[j]) <= d)
            {
                counter++;
            }
        }
    }
    cout << counter * 2;
    return 0;
}