#include<bits/stdc++.h>
using namespace std;
long long int n,x[1000005],y[100005],i,j,p,q,mx;
int main()
{

    while(cin>>n>>p)
    {
        //q=0,y=0;
        long long int c=0,d=0;
        mx=-1000;
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        for(i=1;i<=n;i++)
        {
            cin>>x[i];
            x[i] += x[i-1];
        }
        for(i=2;i<=n;i++)
        {
            c= x[i-1]%p;
            d=(x[n]-x[i-1])%p;
            mx = max(mx,c+d);
        }
        cout<<mx<<endl;
    }
    return 0;
}
