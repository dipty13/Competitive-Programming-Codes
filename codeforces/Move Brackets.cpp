#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> n >> s;
        stack<char> m;
        c = 0;
        for(int i = 0; i < n; i++){
           if(s[i] == '('){
                m.push(s[i]);
              }else if(!m.empty()){
                  m.pop();
              }else{
                  c++;
              }
        }
        cout << c << endl;
    }
    return 0;
}
