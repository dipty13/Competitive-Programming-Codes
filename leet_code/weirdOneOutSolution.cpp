#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll a[], int x[], int  n)
{
    ll l[n+5];
    if(n == 1 && a[1] % x[1] == 0){
        return 0;
    }else if(n == 1 && a[1] % x[1] != 0){
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
        l[i] = 1;
        for(int j = 1;j<i;j++)
        {
            if(a[j] < a[i]&&l[i] < l[j]+1 && a[j] % x[j] == 0)
            {
                l[i] = l[j]+1;
            }
        }
    }
    sort(l+1,l+n+1);
    return n - l[n];
}
int main(int argc, char* argv[])
{

    int n, k, i, c = 0;
        //while(cin>> n){
        cin >> n;
        int x[n + 5];
        string s[105];
        for(i = 1; i <= n; i++)
        {
           cin >> s[i] >> x[i];
        }
        ll a[n + 5], j;
        memset(a, 0, sizeof(a));
        for(i = 1; i <= n; i++)
        {
            for(j = 0; j < s[i].size(); j++)
            {
                a[i] += s[i][j];
            }
           // cout << a[i] << endl;
        }
        ll ans = solve(a, x, n);
        cout << ans << endl;
        //}
    return 0;
}

