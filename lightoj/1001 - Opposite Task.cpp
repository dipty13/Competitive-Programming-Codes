#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    cout << n/2 << " " << n - n / 2<< endl;
}

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}
