#include<bits/stdc++.h>
using namespace std;
int a[105][1005],pos[105][1005];
int LCS(int n,int k)
{
    int l[n+5];
    int flag = 1;
    for(int i = 1; i <= n; i++)
    {
        l[a[1][i]] = 1;
        for(int j = 1; j < i; j++)
        {
            int x = a[1][i],y = a[1][j]; //
            flag = 1;
            for(int p = 1;p<=k;p++)
            {
                if(pos[p][x]<= pos[p][y])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag){
            l[x] = max(l[x],l[y]+1);
            }

        }
    }
        int mx = 0;

        for(int j = 1; j <= n; j++)
        {
            mx = max(mx,l[j]);
        }

    return  mx;
}
int main()
{
    int t,n,k,i,j,m;
    while(cin>>n>>k)
    {
        for(i=0;i<=k;i++)
        {
            for(j=0;j<=n;j++)
            {
                a[i][j] = 0;
            }
        }
        for(i=1;i<=k;i++)
        {
            for(j = 1; j <= n;j++)
            {
                cin>>a[i][j];
                int p = a[i][j];
                pos[i][p] = j;
            }
        }
        cout<<LCS(n,k)<<endl;
    }

    return 0;
}
