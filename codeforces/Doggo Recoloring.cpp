#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,ans;
    while(cin>>n)
    {
        string s;
        cin>>s;
        map<char,int> m;
        if(n == 1)
        {
            cout<<"Yes\n";
            continue;
        }
        for(i = 0 ; i < n;i++)
        {
            m[s[i]]++;
        }
        c = 0;
        for(i = 0 ;i < n;i++)
        {
            if(m[s[i]] >= 2)
            {
                c = 1;
                break;
            }
        }
        if(c)
        {
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
