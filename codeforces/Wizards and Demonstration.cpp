#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, x, y, i, c;
    while(cin >> n >> x >> y)
    {
        double ans = n * (y / 100.0);
        c = ans;
        if(int(ans) != ans)
        {
            c = ceil(ans);
        }
        if(c > x){
        cout << c - x << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}
