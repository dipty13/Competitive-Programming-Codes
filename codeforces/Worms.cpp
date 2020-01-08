#include<bits/stdc++.h>
#include<vector>
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
        cin >> n >> x;
        vector<pair<ll, ll> > v(n + 5);
        y = n;
        while(n--){
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end(), cmp);
        if(v[0].first <= v[0].second){
            cout << -1 << endl;
            continue;
        }
        c = 0;
        ll p = 0;
        while(x != 0 && c <= y){
            x -= v[p].first;
            cout << "x1: " << x << endl;
            x += v[p].second;
            cout << "x2: " << x << endl;
            if(x == 0){
                break;
            }
            if(x < 0){
                p++;
            }
            //cout << x << endl;
            c++;
        }
        if(c > y){
            cout << -1 << endl;
        }else{
        cout << c + 1 << endl;
        }

    }

    return 0;
}
