#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,c;
    string s;
    while(cin>>n>>s)
    {
        x = s.size();
        c=0;
        int q=0,p=0,pp=0;
        if(s[0]=='?')
        {
            q++;
        }
        for(i=1;i<x;i++)
        {
            if((s[i-1]!='?'&&s[i]!='?')&&(s[i-1]==s[i]))
            {
                c=1;
                break;
            }
            if(s[i]=='?')
            {
                q++;
                if(i-1>=0&&i+1<n&&s[i-1]!='?'&&s[i+1]!='?'&&s[i-1]!=s[i+1])
                {
                    p++;
                }

            }
     }
     if(x==1&&s=="?")
     {
         cout<<"Yes\n";
    }

    else if(c==1||q==p)
        {
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }

    }
    return 0;
}
