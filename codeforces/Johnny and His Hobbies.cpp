#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, x, a, b, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n + 5, INT_MAX);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int f = 0, flag = -1;
        for(int i = 1; i <= 1024; i++){
            f = 1;
            vector<ll> p(n + 5, INT_MAX);
            for(int j= 0; j < n;j++){
                p[j] = v[j] ^ i;
                //cout << p[j] << endl;
            }
            sort(p.begin(), p.end());
            //for(int j= 0; j < n;j++){
                if(p != v){
                    f = -1;
                }
            //}
            if(f == 1){
                cout << i << endl;
                flag = 1;
                break;
            }

        }
        if(flag == -1)
            cout << -1 << endl;

    }
        return 0;
    }
