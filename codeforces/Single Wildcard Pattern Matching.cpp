#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,m,n,p;
    while(cin>>n>>m)
    {
        string s,t;
        p = -1;
        cin>>s>>t;
        for(i = 0;i < n ;i++)
        {
            if(s[i] == '*')
            {
                p = i ;
                break;
            }
        }
        if( p == -1&& s != t)
        {
            cout<<"NO\n";
        }else if( p == -1&& s == t)
        {
            cout<<"YES\n";
        }
        else if(p != -1){
            int x = n-(p+1);
            //cout<<t.substr(0,p)<<" "<<t.substr(m-x,x)<<endl;
            if(n>m&& n-1 == m&& t.substr(0,p)==s.substr(0,p)&&t.substr(m-x,x)==s.substr(p+1,n - (p+1)))
            {
                cout<<"YES\n";
            }
            else if(n<=m &&t.substr(0,p)==s.substr(0,p)&&t.substr(m-x,x)==s.substr(p+1,n - (p+1)))
            {
                cout<<"YES\n";
            }else{
            cout<<"NO\n";
        }
        }

    }
    return 0;
}
