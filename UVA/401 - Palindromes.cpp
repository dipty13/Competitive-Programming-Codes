#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r=0,n,s[10005],i,mx,j,pel,mir;
    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    map<char,char> m;
    for(i=0;i<s1.size();i++)
    {
        m[s1[i]]=s2[i];
    }
    string x;
    while(cin>>x)
    {
        pel=mir=1;
        n=x.size();
        //char cad[21];
        for(i=0;i<=n/2;i++)
        {
            if(x[i]!=x[n-1-i])
            {
                pel=0;
            }
            if(x[n-1-i]!=m[x[i]])
            {
                mir=0;
            }
        }
        if(pel==1&&mir==1)
        {
            cout<<x<<" -- is a mirrored palindrome.\n\n";
        }
        else if(pel==1&&mir==0)
        {
            cout<<x<<" -- is a regular palindrome.\n\n";
        }
        else if(pel==0&&mir==1)
        {
            cout<<x<<" -- is a mirrored string.\n\n";
        }
        else {
            cout<<x<<" -- is not a palindrome.\n\n";
        }

    }
    return 0;
}
