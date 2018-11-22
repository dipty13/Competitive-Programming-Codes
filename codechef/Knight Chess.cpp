/**
    by Shaila Nasrin Dipty
    Date: 4/9/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,sum,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int x[n + 5], y[n + 5];
        for(i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        cin >> a >> b;
        sort(x, x + n);
        sort(y, y + 5);
        int c = 0;
        for(i = 0; i < n; i++)
        {
            if(x[i] == a || y[i] == b)
            {
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}
