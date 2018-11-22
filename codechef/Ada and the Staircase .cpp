#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll t,n, x, k, m, i, c;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int h[n + 5];
        double p, q;
        c = 0;
        for( i = 0; i < n; i++)
        {
            cin >> h[i];

        }
        sort(h, h + n);
        for( i = 1; i < n; i++)
        {
            p = h[i] - h[i - 1];
            if(p > k){
            p = p / k ;
            c += (int) p;

            }

        }
        cout << c << endl;
    }
    return 0;
}
