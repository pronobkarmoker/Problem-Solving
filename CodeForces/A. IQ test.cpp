#include <bits/stdc++.h>
using namespace std;
int main()
{

    int s;
    cin >> s;
    int E = 0, in1, in2;
    for (int i = 3; i <= s; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            E++;
            in1 = i;
        }
        else
            in2 = i;
    }
    if (E == 1)
        cout << in1;
    else
        cout << in2;
}
