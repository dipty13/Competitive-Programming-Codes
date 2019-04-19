/**
    by Shaila Nasrin Dipty
    Date: 30/03/2018
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b){
    return a.first > b.first;
}
int main()
{
    ll n,t,k,i,j,b, x, c;
    cin>>t;
    while(t--)
    {
        cin>> n >> k;
        ll a[n + 5];
        pair<ll, ll> p[n + 5];
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
            p[i] = {a[i], i + 1};
        }
        sort(p, p + n, cmp);
//        for(i = 0; i < n; i++)
//        {
//           cout << p[i].first << " ";
//        }
        ll sum = 0;
        for(i = p[0].second  - 1; i >= 0; i -= k){
            if(a[i] < 0){
                break;
            }
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
