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
    ll n, m, i, j, k;
    while(cin >> n >> k){
      vector<ll> a(k + 5);
      map<ll,ll> p;
      vector<pair<ll,ll> > mp(k + 5);
      for(i = 0; i < k; i++){
        cin >> a[i];
        p[a[i]] = 1;
      }
      sort(a.begin(), a.end());
      for(i = 0; i < k; i++){
        if(n % a[i] == 0)
            cout << 1 << " " << 1 << endl;
        else

      }
    }

    return 0;
}

