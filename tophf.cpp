#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b)
{
  return a.first - a.second > b.first - b.second;
}
ll  maxSumIncreasingSubsequence(vector<ll> a) {
        vector<ll> sum =a;
       for(ll i = 0; i < a.size(); i++){
            sum[i] = a[i];
         for(ll j = 0; j < i; j++){
            if(a[j] < a[i] && sum[i] <= sum[j] + a[i]){
                sum[i] = sum[j] + a[i];

            }
         }
       }
    sort(sum.begin(), sum.end());
    return sum[sum.size() - 1];
}

int main()
{
    ll  t, n, i,a, b, c, d, x, y;
    cin >> n;
    vector<ll> v(n + 5);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << maxSumIncreasingSubsequence(v) << endl;
    return 0;
}
