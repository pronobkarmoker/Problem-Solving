#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int y = 0, z = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                z += 1;
            }
            if (s[i] == 'D')
            {
                z -= 1;
            }
            if (s[i] == 'R')
            {
                y += 1;
            }
            if (s[i] == 'L')
            {
                y -= 1;
            }
            if (y == 1 && z == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}