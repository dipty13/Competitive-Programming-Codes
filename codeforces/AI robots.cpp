
#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n,m,y,z,i,k,j,c;
    while(cin >> n >> k)
    {
        ll x[n+5] ,r[n+5] ,s[n+5];
        vector< pair< ll, pair<ll, ll> > > v;
        for( i = 0; i < n; i++)
        {
            cin>> x[i] >> r[i] >> s[i];
            v.push_back({s[i],{r[i],x[i]}});


        }
       // sort(v.begin(),v.end());
         y =  v[0].second.second - v[0].second.first;
        z = v[0].second.first + v[0].second.second;
        j = v[0].first;
        c = 0;

        for( i = 1; i < n; i++)
        {
            //cout<<v[i].second.first<<" "<<v[i].first<<endl;
           if(v[i].second.first>= y && v[i].second.first <= z)
           {
               if(v[i].first - j <= k)
               {
                   //cout<<v[i].second.first<<" "<<j<<endl;
                   c++;
               }
           }
            y = v[i].second.second - v[i].second.first;
        z = v[i].second.first + v[i].second.second;
         j = v[i].first;
        }
        cout<<c<<endl;

    }
    return 0;
}
