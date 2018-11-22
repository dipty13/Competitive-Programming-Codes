#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int main()
{
    ll n, d, m, i, ans;
    while(cin >> n >> m)
    {
        for(i = m + 1; i >= 1; i--)
        {
            cout << i << " ";
        }
        for(i = m + 2; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
