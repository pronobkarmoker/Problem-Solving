#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,cnt;
    cin >> t;
    while(t--)
    {
        cin >> a>> b >> n;
        //int mx=max(a,b);
         cnt=0;
        while(a<=n && b<=n)
        {
            if(a<b)
            {
                a+=b;
            }
            else
            {
                b+=a;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
