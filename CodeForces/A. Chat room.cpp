#include <bits/stdc++.h>
using namespace std;
int main()
{
    char g[] = {'h', 'e', 'l', 'l', 'o'};
    char gh[101];
    int vr[5];
    cin >> gh;
    int l = 0;
    for (int i = 0; i < strlen(gh); i++)
    {
        if (gh[i] == g[l])
        {
            vr[l] = 1;
            l++;
        }
        if (l == 5)
            break;
    }
    if (l == 5)
        cout << "YES" << endl;
    else if (l < 5)
        cout << "NO" << endl;
    return 0;
}
