#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,k,q,p,c,l,r;
    while(cin>>n>>m>>q)
    {
        string s,x;
        int b[n+5];
        memset(b,0,sizeof(b));
        cin>>s;
        cin>>x;
        for(i=0;i<n;i++)
        {
            if(s.substr(i,m)==x)
            {
                b[i]++;
            }
        }

        for(i=0;i<q;i++)
        {
            cin>>l>>r;
            r-=m-1;
            if(r<=l)
            {
                cout<<0<<endl;
            }else{
                cout<<b[r]-b[l-1]<<endl;
            }
        }


    }
    return 0;
}
