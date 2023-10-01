#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int count=0;
        string s;
        cin>>s;
        string a="codeforces";
        for(int i=0;i<10;i++)
        {
            if(a[i]!=s[i])
            count++;
        }
        cout<<count<<endl;
	}
	return 0;
}

