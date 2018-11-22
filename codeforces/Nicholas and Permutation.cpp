#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, m, i;
    while(cin >> n)
    {
        ll a[n + 5], b[n + 5], x = 1, y = n, p, q;

        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);
        for(i = 1; i <= n; i++)
        {
            if(a[i] == b[1] || a[i] == b[n])
            {
                if(a[i] == b[1])
                {
                    x = i;
                    p = b[1];
                }else{
                    x = i;
                    p = b[n];
                }
                break;
            }
        }
        if(p == b[1])
        {
            q = b[n];
        }else{
            q = b[1];
        }

        for(i = x + 1; i <= n; i++)
        {
            if(a[i] == q)
            {
                y = i;
                //cout << q << endl;
            }
        }
        if(x >= n - y + 1)
        {
            cout << y - 1 << endl;
        }else{
            cout << n - x << endl;
        }

    }
    return 0;
}
