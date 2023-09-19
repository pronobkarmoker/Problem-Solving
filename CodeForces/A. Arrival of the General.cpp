#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int x[a];
    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    int mn = 1e9, max = x[0];
    int max_index = 0, min_index = 0;
    for (int i = 0; i < a; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
            max_index = i;
        }
        if (x[i] <= mn)
        {
            mn = x[i];
            min_index = i;
        }
    }
    if (max_index > min_index)
        cout << (max_index - 1) + (a - min_index) - 1;
    else
        cout << (max_index - 1) + (a - min_index);
}
