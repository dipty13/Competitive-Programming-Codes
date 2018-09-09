#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int d,a,m,b,x,t,n,k,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>d>>a>>m>>b>>x;
        k = (a * (m + 1)) - d ;
        double  ans = x/(k*1.0);
        //cout<<ans<<endl;
        c = ((m+1) * ceil(ans)) - m;
        cout<<c<<endl;

    }
    return 0;
}
