#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, m, i, c;
    while(cin >> n)
    {
       string x = "", s, y = "";
       cin >> s;
        c = n - 1;
            for(i = 1; i < s.size(); i++){
                if(s[i - 1] > s[i]){
                    c = i - 1;
                    break;
                }
            }
        cout << s.substr(0, c) + s.substr(c + 1)  << endl;
    }
    return 0;
}
