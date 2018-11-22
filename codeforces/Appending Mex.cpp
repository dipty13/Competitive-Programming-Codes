
#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, i;
    while(cin >> n)
    {
        ll a[n + 5], mx = 0, c = 1;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       for(i = 0; i < n; i++)
        {
            if(a[i] > mx)
            {
                cout << i + 1 << endl;
                c = 0;
                break;
            }
            mx = max(mx, a[i] + 1);
        }
        if(c)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}

