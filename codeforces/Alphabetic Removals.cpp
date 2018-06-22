#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,c;
    while(cin>>n>>k)
    {
        string s,p="abcdefghijklmnopqrstuvwxyz";
        cin>>s;
        for(i=0;k>=1&&i<26;i++)
        {
            for(j=0;k>=1&&j<n;j++)
            {
                if(p[i]==s[j])
                {
                    //cout<<s[j]<<endl;
                    s[j] = '1';
                    k--;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]!='1')
            {
                cout<<s[i];
            }
        }
        cout<<endl;

    }

    return 0;
}
