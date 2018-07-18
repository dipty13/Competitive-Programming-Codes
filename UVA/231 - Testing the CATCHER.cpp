#include<bits/stdc++.h>
using namespace std;
int LDS(int a[],int n)
{
    int l[n+5];
    for(int i=1;i<=n;i++)
    {
        l[i] = 1;
        for(int j = 1;j<i;j++)
        {
            if(a[j]>a[i]&&l[i]<l[j]+1)
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

    int n,i,j,k=0,x;
    while(scanf("%d",&x)&&x!=-1)
    {
        int a[10005];
        i = 1;
        a[i] = x;
        int y=0;
        while(scanf("%d",&y)&&y!=-1)
        {
            i++;
            a[i] = y;

        }
        if(k)
        {
            puts("");
        }
        printf("Test #%d:\n",++k);
        printf("  maximum possible interceptions: %d\n",LDS(a,i));

    }
    return 0;
}
