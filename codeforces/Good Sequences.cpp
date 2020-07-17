#include<bits/stdc++.h>
using namespace std;
/**
*finding the length of Longest Increasing Subsequence
*/
int LIS(int a[],int  n)
{
    int l[n+5];
    for(int i=1;i<=n;i++)
    {
        l[i] = 1;
        for(int j = 1;j<i;j++)
        {
            if(a[j]<a[i]&&l[i]<l[j]+1)
            {
                if(__gcd(a[j],a[i])==1)
                {
                    continue;
                }
               // cout<<a[j]<<" "<<a[i]<<" "<<__gcd(a[j],a[i])<<" "<<l[i]<<endl;
                l[i] = l[j]+1;
            }
        }
    }

sort(l+1,l+n+1);
    return l[n];
}
int main()
{
    int n,i;
    while(cin>>n){
    int a[n+5];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<LIS(a,n)<<endl;
    }
    return 0;
}
