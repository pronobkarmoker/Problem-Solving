#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int result = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == result)
                result = result + 2;
            else
                result++;
        }
        cout << result - 1 << endl;
    }
    return 0;
}