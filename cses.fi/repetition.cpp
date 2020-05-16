#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, i, c, mx = 0;
    string s;
    cin >> s;
    n = s.size();
    c = 1, mx = 1;
    for(i = 1; i < n; i++){
        if(s[i] == s[i - 1]){
            c++;
        }else{
            c = 1;
        }
        mx = max(c, mx);
    }
    cout << mx << endl;
    return 0;
}
