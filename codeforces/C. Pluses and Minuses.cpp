#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    cin >> t;
    while(t--){
        string s;
        //char prev = 'x';
        cin.ignore();
        cin >> s;
        ll res = 0, curr = 0;
        n = s.size();
        stack<char> prev;
        for(int i = 0; i < n; i++){
           if(s[i] == '-')
                curr--;
           else
            curr++;
           if(curr < 0){
             res += i + 1;
             curr = 0;
           }
        }
        cout << res + n << "\n";
    }
    return 0;
}
