#include <bits/stdc++.h>
using namespace std;
long long int a[100005][105];
void solve(int n)
{
    map<pair<long long int,long long int>,long long int> m;
    map<pair<long long int,long long int>,long long int>::iterator it;
    for(long long int i = 0; i < n; i++)
    {
        m[{a[i][0],a[i][1]}]++;
    }
    for(it = m.begin();it != m.end(); it++)
    {
        cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
    }
}
int main()
{
   long long int n, k, i, j;
    cin >> n;
    for(i = 0; i < n ; i++)
    {
        cin >> a[i][0]>>a[i][1];
    }
    solve( n);
    return 0;
}
