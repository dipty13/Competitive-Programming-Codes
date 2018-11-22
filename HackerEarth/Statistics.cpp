#include <bits/stdc++.h>
using namespace std;
string a[10005][15];
void solve(int n)
{
    map<string,long long int> m;
    map<string,long long int>::iterator it;
    for(long long int i = 0; i < n; i++)
    {
        m[a[i][1]]++;
    }
    long long int mx = -1;
    string s = "";
    for(long long int i = 0; i < n; i++)
    {
       if(mx < m[a[i][1]])
       {
           mx = m[a[i][1]];
           s = a[i][1];
       }
    }
    cout<< s <<endl;
    cout<<m["football"]<<endl;
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
