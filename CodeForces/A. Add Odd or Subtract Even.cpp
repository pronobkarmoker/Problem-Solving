#include <iostream>
using namespace std;
int main()
{
    int t, a, b, x;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a == b)
            cout << "0" << endl;
        else if (a > b)
        {
            x = a - b;
            if (x % 2 == 0)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
        else
        {
            x = b - a;
            if (x % 2 != 0)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
    }
}
