#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char> unq;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            unq.insert(s[i]);
        }
    }
    cout << unq.size() << endl;
    return 0;
}