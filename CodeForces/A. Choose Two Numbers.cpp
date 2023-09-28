#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    cin >> y;
    int arr2[y];
    for (int i = 0; i < y; i++)
        cin >> arr2[i];
    sort(arr, arr + x);
    sort(arr2, arr2 + y);
    cout << arr[x - 1] << " " << arr2[y - 1];
}
