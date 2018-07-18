#include<bits/stdc++.h>
using namespace std;
int LIS(int a[],int n)
{
    int l[n+5];
    for(int i = 1;i<=n;i++)
    {
        l[i] = 1;
        for(int j = 1;j<i;j++)
        {
            if(a[j]<a[i]&&l[i]<l[j]+1)
            {
                l[i] = l[j]+1;
            }
        }
    }

    sort(l+1,l+1+n);
    return l[n];
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
        int c[n+5],x,y;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&c[i]);
        }

            printf("%d\n",LIS(c,n));
    return 0;
}
