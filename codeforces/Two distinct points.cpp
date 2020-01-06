#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
pair<ll,ll> solve(ll l1, ll r1, ll l2, ll r2){
    if(l1 != l2){
        return {l1,l2};
    }else{
        return {l1,l2 + 1};
    }
}
int main()
{
    ll n, m, i, j;
    while(cin >> n){
      while(n--){
        ll l1,l2,r1,r2;
        cin >> l1 >> r1 >> l2 >> r2;
        pair<ll,ll> p = pair<ll,ll>(solve(l1,r2,l2,r2));
        cout << p.first << " " << p.second << endl;
      }
    }

    return 0;
}

