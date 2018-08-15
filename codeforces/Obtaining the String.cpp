#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,n,i,j,k;
    while(cin>>n)
    {
        string s,t;
        cin>>s>>t;
        map<char,int> m,mp;
        int c = 0;
        for(i=0; i<n; i++)
        {
            m[s[i]] = 1;
            mp[t[i]] = i + 1;
        }
        for(i=0; i<n; i++)
        {
            if(m[t[i]] == NULL)
            {
                c = 1;
                break;
            }
        }
        int a[n+5],p = 0;
        if(c==1)
        {
            cout<< -1 <<endl;
        }
        else
        {
            p = 0, c = 0;
            for(i = 0 ; i < n; i++)
            {
                if(mp[t[i]] != i+1)
                {
                    c++;
                    a[p] = i+1;
                    p++;
                }
            }
        }

        cout<<c<<endl;
        for(i=0; i<p; i++)
        {
            cout<<a[i]<<" ";
        }

    }
    return 0;
}
