#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n,i,k,j,a,b,x,c;
    while(cin>>n)
    {
       pair<ll,ll> p[n+5];
       for(i = 0 ;i < n;i++)
       {
           cin>>p[i].first>>p[i].second;

       }
       sort(p, p+n);
       c = -1;
       for(i= 0; i < n;i++)
       {
           //cout<<c <<" "<<it->second<<endl;
           if( c <= p[i].second)
           {
               c = p[i].second;
           }else{
               c = p[i].first;
           }
       }
       cout<<c<<endl;
    }
    return 0;
}
