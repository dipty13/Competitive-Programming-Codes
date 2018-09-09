#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
#define MX 1e5 + 7
using namespace std;
vector<int> v(MX);
//vector<int> l(MX);
int solve(ll a[],ll n)
{
    ll l[n+5],i,j=0;
     for(i = 1;i<=n;i++)
    {

           l[i] = 1;
    }
    for(i = 2;i<=n;i++)
    {
       if(a[i]>a[i-1])
       {
           l[i] += l[i-1];
       }else{
           l[i] = 1;
       }
    }
    sort(l+1,l+n+1);
    return l[n];
}
int main()
{
    ll n,m,x,i,j,k,c;
    while(cin>>n)
    {
        ll a[n+5];
        for( i = 1;i<=n;i++)
        {
            cin>>a[i];
        }
        c = solve(a,n);
        cout<<c<<endl;
       // l.clear();
    }
    return 0;
}
