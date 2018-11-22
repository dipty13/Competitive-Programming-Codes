#include <bits/stdc++.h>
using namespace std;
void solve(long long int a[], long long int n, long long int k)
{
    unordered_map<long long int, long long int> m;

     for(long long int i = 0; i < n; i++)
    {
       int x = k - a[i];
       if(m[x])
       {
           cout<<"YES\n";
           return;
       }
       m[a[i]] = 1;
    }
    cout<<"NO\n";
}
int main()
{
    long long int n, k, i, j;
    cin >> n >> k;
    long long int a[n + 5];
    for(i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    solve(a, n, k);
    return 0;
}
