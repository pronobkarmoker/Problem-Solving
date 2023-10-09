#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string substr, str = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> substr;
        int a = str.find(substr);
        if (a < str.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}