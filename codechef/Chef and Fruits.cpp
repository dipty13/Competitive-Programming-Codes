#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(n==m)
        {
            cout<<0<<endl;

        }
        else if(n<m)
        {
            if(n+k<=m)
            {
                n+=k;
                cout<<abs(n-m)<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else if(n>m)
        {
            if(m+k<=n)
            {
                m+=k;
                cout<<abs(m-n)<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }

    }

    return 0;
}
