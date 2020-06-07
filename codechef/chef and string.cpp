#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, c, o, e;
    cin >> t;
    while(t--)
    {
        //cin >> n >> k;
        string s;
        cin >> s;
        ll i = 1, c = 0, l;
        l = s.size();
        while(i < l){
            if(s[i] != s[i - 1]){
                c++;
                i += 2;
            }else{
                i++;
            }
        }
        cout << c << endl;

    }
        return 0;
    }
