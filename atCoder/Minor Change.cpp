#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll a, ans = 0;
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != t[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
