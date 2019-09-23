#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, k, i, j, b, c , d;

    while(cin >> n >> k){
        string s;
        cin >> s;
        if(n == 1 && k == 1){
            cout << 0 << endl;
            continue;
        }else if(n == 1 && k == 0){
            cout << n << endl;
            continue;
        }
        ll x = 0;
        for(i = 0; i < n; i++){
            if(x == k){
                break;
            }

            if(i == 0 && s[i] > '1'){
                s[i] = '1';
                x++;
               // cout << x << endl;
            }else if(i > 0 && s[i] > '0'){
                s[i] = '0';
                x++;
            }
        }
        cout << s << endl;
    }

    return 0;
}

