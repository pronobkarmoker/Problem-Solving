#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int t = a[i];
        b[t - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
}