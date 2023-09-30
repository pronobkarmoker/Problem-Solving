#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, k;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y')
        {
            k = k + '.';
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
                k += s[i];
            }
            else
            {
                k = k + s[i];
            }
        }
    }
    cout << k;
    return 0;
}
