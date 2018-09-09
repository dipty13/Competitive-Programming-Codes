#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,x,i,k,j,c;
    while(cin>>n>>l>>r>>x)
    {
        int a[n + 5];
        long long int sum = 0;
        for(i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        sum = 0;
        for( i = 1 ;i <= n;i++)
        {
            sum = 0;
            for(j = i; j <= n;j++)
            {
                sum += a[j];
                if(sum >= l && sum <= r )
            }
        }
    }

    return 0;
}
