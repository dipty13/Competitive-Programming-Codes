#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
ofstream o("output.out");
int main()
{
    ll n, t, k, m, a, b, i, c, j;
    while(cin >> k){
        vector<ll> v(10, 1);
        string s = "codeforces";
        ll sum = 1, temp = 0;
        while(sum < k){
            v[temp]++;
            temp = (temp + 1) % 10;
            sum = 1;
            for(i = 0; i < 10; i++){
                sum *= v[i];
            }
        }
        for(i = 0; i < 10; i++){
            for(j = 0; j < v[i]; j++){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
