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
        cin >> n >> k;
        char s[n + 5];
        cin >> (s + 1);
        c = 0;
        vector<ll> v = {0};
        for(int i = 1; i <= n; i++){
            if(s[i] == '1'){
                v[i] = v[i - 1] + 1;
            }else{
                v[i] = v[i - 1];
            }
        }

        if(s[1] == '0' && v[1 + k - 1] <= 0){
            v[1] = 1;
            v[1 + k - 1] = 1;
            s[1] = '1';
            c++;
        }
        for(int i = k + 1; i <= n; i += k + 1){
           // cout << s << " " << i << endl;
            if(s[i] == '0' && v[i + k - 1] == v[i] && v[i - k - 1] == v[i]){
               // cout << i << endl;
                   // cout << "i: " << i << " v[i]: " << v[i] << " v[i + k - 1]: " << v[i + k - 1] << endl;
//                v[i + k - 1]  += 1;
//                v[i - k - 1] += 1;
//                v[i] += 1;
                s[i] = '1';
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
