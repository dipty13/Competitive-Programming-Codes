#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n,m,i,k,j,x,c,l, r;
    while(cin>> l >> r)
    {
        map<ll,ll> m;
        vector< pair<ll,ll>> p;
        j = l;
        c = 0;
        for(i = l + 1 ; i <= r ;i++)
        {
            if(m[j] != 1&& m[i] != 1 && __gcd(j, i) == 1)
            {
                    p.push_back({j, i});
                    m[j] = 1;
                    m[i] = 1;
                    c = 1;
            }
            j++;
        }
        if(c)
        {
            cout<<"YES\n";
            for(i = 0; i < p.size();i++)
            {
                cout<<p[i].first <<" "<< p[i].second <<endl;
            }
        }else{
        cout<<"NO\n";
        }



    }
    return 0;
}
