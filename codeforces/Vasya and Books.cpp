#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, l, k, m, i, ans ;
    while(cin >> n)
    {
       ll a[n + 5], b[n + 5];
       queue<ll> q;
       map<ll, ll> mp;
       for(i = 0; i < n; i++)
       {
           cin >> a[i];
           q.push(a[i]);
       }
       for(i = 0; i < n; i++)
       {
           cin >> b[i];
           mp[b[i]] = 1;
       }
       ll x,c = 0, p[n + 5], j = 0;
       for(i = 0; i < n; i++)
       {
           c = 0;
           if(mp[b[i]] == 1){
           while(x != b[i])
           {
               if(q.empty())
               {
                   c = 0;
                   break;
               }
               x = q.front();
               mp[x] = 0;
               //cout << b[i] << " " << x<< endl;
               q.pop();
               c++;
           }
           }
           p[i] = c;

       }
       for(i = 0; i < n; i++)
       {
           cout << p[i] << " ";
       }
       cout << endl;
    }
    return 0;
}
