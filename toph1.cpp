#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b)
{
  return a.first - a.second > b.first - b.second;
}
int main()
{
    long long int  t, n, i,a, b, c, d, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll h, l, w;
        ll mnH = 0, mnL = 0, mnW = 0, sumH = 0, sumL = 0, sumW = 0;
        for(i = 0; i < n; i++){
            cin >> h >> l >> w;
            mnH = max(mnH, h);
            mnL = max(mnL, l);
            mnW = max(mnW, w);
            sumH += h;
            sumL += l;
            sumW += w;
        }
        cout << min((sumH * mnL * mnW), min((mnH * sumL * mnW), (mnH* mnL * sumW))) << endl;
    }

    return 0;
}
