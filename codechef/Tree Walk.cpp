/**
    by Shaila Nasrin Dipty
    Date: 10/27/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, sum, i, j, a, b, k, l;
    cin>>t;
    while(t--)
    {
        int p, q, u, v;
        cin>>n >> k >> l;
        n--;
        while(n--)
        {
            cin >> p >> q;

        }
        map<int, int> m1, m2;
        for(i = 0; i < k; i++)
        {
            cin >> u ;
            m1[u] = 1;
        }
        for(i = 0; i < l; i++)
        {
            cin >> v ;
            m2[v] = 1;
        }
        int c = 0;
        for(i = 0; i < l; i++)
        {
            if(m1[v])
            {
                c++;
            }
        }
        cout << c << endl;

    }
    return 0;
}
