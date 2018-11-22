/**
    by Shaila Nasrin Dipty
    Date: 26/10/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, sum, i, j, a, b;
    cin >> t;
    while(t--)
    {
        cin >> n >> a;
        long long int h[n + 5], c[n + 5], cnt = 0;
        map<long long int,  long long int> m, p;
        for(i = 0; i < n; i++)
        {
            cin >> h[i];
            m[h[i]] = 1;
        }
        for(i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for(i = 1; i < n; i++)
        {
            if(m[h[i - 1]] == 1 && h[i - 1] >= h[i])
            {
                m[h[i - 1]] = 0;
                p[c[i]];
            }

        }
        if(m[h[n - 1]] == 1 && h[n - 1] >= h[n - 2])
        {
            p[c[i]];
        }
        cout << p.size() << endl;


    }
    return 0;
}
