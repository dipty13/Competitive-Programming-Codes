#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int v[n + 5];
        map<ll, ll> m;
        map<ll, pair<ll, ll> > p;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            m[v[i] % 2]++;
        }
        c = 0;
        ll flag = 1;
        for(int i = 0; i < n; i++){
            if(i % 2 != v[i] % 2){
                    flag = 0;
                for(int j = i +1; j < n; j++){
                    if(j % 2 != v[j] % 2 && j % 2  == v[i] % 2){
                            flag = 1;
                        swap(v[i], v[j]);
                        c++;
                        break;
                    }
                }
            }
        }
        cout << ((flag == 0) ? -1 : c) << endl;
    }

    return 0;
}
