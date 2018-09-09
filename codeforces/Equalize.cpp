#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,c,k,x;
    while(cin>>n>>k)
    {
        long long int a[n+5],ans = 0;
        for(i = 0;i < n;i++)
        {
           cin>>a[i];
        }
        sort(a,a+n);
            for(i = n/2 ;i>=0;i--)
            {
                if(a[i]>k){
                ans += a[i] - k;
                }
            }

            for(i = n/2 ;i < n;i++)
            {
                if(a[i]<k){
                ans += k - a[i];
                }
            }

        cout<<ans<<endl;

    }
    return 0;
}
