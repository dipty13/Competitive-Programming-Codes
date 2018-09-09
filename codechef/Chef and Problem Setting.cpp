/**
    by Shaila Nasrin Dipty
    Date: 25/8/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,a,b,invalid,weak,fine;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string s,x;
        invalid = 0,weak = 0;
        while(n--)
        {
            cin>>s>>x;
            map<char,int> mp;
            for(i = 0 ;i<m;i++)
            {
                mp[x[i]]++;
            }
            if(s=="correct" && mp['1'] != m)
            {
                invalid = 1;
            }else if(s == "wrong" && mp['1'] == m)
            {
                weak = 1;
            }
        }
        if(invalid == 1)
        {
            cout<<"INVALID\n";
        }else if(weak == 1)
        {
            cout<<"WEAK\n";
        }else{
            cout<<"FINE\n";
        }

    }
    return 0;
}
