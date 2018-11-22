/**
    by Shaila Nasrin Dipty
    Date: 3/11/2018
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, n, i, c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll a[n + 5], b[n + 5], j;
        map<ll, ll> m;
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
            m[i] = a[i];
        }
        sort(a + 1, a + n + 1);
        j = 1;
        for(i = 2; i <= n; i++)
        {
            if(a[i - 1] != a[i])
            {
                //j++;
                b[j] = a[i - 1];
                j++;
                b[j] = a[i];
               // j++;
            }
        }
        sort(b + 1, b + j + 1);
        c = 1;
        for(i = 2; i <= j; i++)
        {
            //cout << m[b[i - 1]] << " " << m[b[i]] << endl;
            if(m[b[i]] == m[b[i - 1]])
            {
                cout << "Truly Happy\n";
                c = 0;
                break;
            }
        }
        if(c)
        {

            cout << "Poor Chef\n";
        }

    }
    return 0;
}
