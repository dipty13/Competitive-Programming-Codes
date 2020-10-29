#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n, a, b, c, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n);
        for(i = 0; i < n; i++){
            cin >> v[i];
        }
        ll neg = 0, pos = 0;
        for(i = 0; i < n; i++){
            if(v[i] > 0){
                pos += v[i];
            }else{
                if(pos + v[i] >= 0){
                    pos += v[i];
                }else{
                    v[i] += pos;
                    pos = 0;
                    neg += v[i];
                }
            }
        }
        cout << pos << endl;
    }


    return 0;
}

