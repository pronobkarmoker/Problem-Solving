#include <iostream>
using namespace std;
int main()
{
    int len = 0, Mlen = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            len++;
            if (len > Mlen)
            {
                Mlen = len;
            }
        }
        else
        {
            len = 0;
        }
    }
    if (Mlen >= 6)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}