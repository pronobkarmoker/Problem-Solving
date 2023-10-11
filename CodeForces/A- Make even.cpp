#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        
        cin >> str;
        int x, y;
        x = str[0] - 48;
        y = str[str.size() - 1] - 48;
        if (y % 2 == 0)
            cout << 0 << endl;
        else if (x % 2 == 0)
            cout << 1 << endl;
        else
        {
            int temp = 0;
            for (int i = 0; i < str.size(); i++)
            {
                x = str[i] - 48;
                if (x % 2 == 0)
                {
                    cout << 2 << endl;
                    temp = 1;
                    break;
                }
            }
            if (temp == 0)
                cout << -1 << endl;
        }
    }
    return 0;
}
