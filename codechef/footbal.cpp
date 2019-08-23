/**
    by Shaila Nasrin Dipty
    Date: 6/08/2019
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n + 5];
        int b[n + 5];
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int mx = INT_MIN;
        for(i = 0; i < n; i++)
        {
            int score = ((a[i] * 20) - (b[i] * 10)) ;
            score = score >= 0 ? score : 0;
            mx = max(mx, score);
        }
        cout << mx << endl;
    }
    return 0;
}
