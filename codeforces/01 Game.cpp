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
        ll cnt = 0;
        n = s.size();
        stack<char> prev;
        for(int i = 1; i < n; i++){
            if(s[i - 1] != 'p' && s[i - 1] != s[i]){
                cnt++;
                s[i] = 'p';
            }else if(!prev.empty() && prev.top() != s[i]){
                    cnt++;
                    s[i] = 'p';
                    prev.pop();
            }else if(s[i - 1] != 'p'){
                prev.push(s[i - 1]);
            }
            //cout << cnt << " i: " << i << endl;
        }

        if(cnt % 2){
            cout << "DA\n";
        }else{
            cout << "NET\n";
        }
    }
    return 0;
}
