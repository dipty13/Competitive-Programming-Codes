#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(ll n)
{
    if( n == 1 || n== 0)
    {
        return n;
    }
    return solve(n - 1)+solve(n-2);
}
int main()
{
    int n,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<solve(n)<<endl;
    }

    return 0;
}
