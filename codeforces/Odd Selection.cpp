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
        cin >> n >> m;
        ll odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(a % 2)
                odd++;
            else
                even++;
        }
        if(odd == 0){
            cout << "No\n";
            continue;
        }
        c = min(odd, m);
        if(c % 2== 0)
            c--;
        if(even >= m - c){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
        return 0;
    }
