#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,i,j,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;

        string x = "";
        int c = 0;
        for(i = n+1;;i++)
        {
        stringstream ss;
         map<char,int> m;
        string s;
        ss<<i;
        ss>>s;
        for(j = 0;j< s.size();j++)
        {
            if(s[j]=='3')
            {
                m['3']++;
            }
        }
        if(m['3']>=3)
        {
            x = s;
            c = 1;
            break;
        }
        }
        if(c)
        {
            cout<<x<<endl;
        }
    }
    return 0;
}
