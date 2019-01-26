#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, h, m, i, sum, j, c;

    while(cin >> n)
    {
        int x[n + 5], h[n + 5];
        c = 0;
        for(i = 1; i <= n; i++)
        {
            cin >> x[i] >> h[i];

        }
        m = INT_MIN;
        c = 0;
        for(i = 1; i <= n; i++)
        {
            if(m < x[i] - h[i]){
                m = x[i];
                c++;
            }else if(i == n || x[i] + h[i] < x[i + 1]){
                m = x[i] + h[i];
                c++;
            }else{
                m = x[i];
            }

        }
        cout << c << endl;

    }
    return 0;
}
