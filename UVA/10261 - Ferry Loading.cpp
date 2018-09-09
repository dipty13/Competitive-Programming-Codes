#include<bits/stdc++.h>
using namespace std;
int knapsack(int w[],int  n,int B)
{
    int k[n+5][B+5],i,b;
    for(i = 0;i <= n;i++)
    {
        k[i][0] = 1;
    }
    for(b = 0;b <= B;b++)
    {
        k[0][b] = 1;
    }
    int c = 0;
    for(i = 1;i <= n;i++)
    {
        for(b = 1;b <= B;b++)
        {
            if(w[i - 1]<= b)
            {
                int p = w[i-1];
                k[i][b] = max(1 + k[i - 1][b - p],k[i-1][b]);
                c++;
               // cout<<k[i][b]<<" mx "<<w[i-1]+k[i-1][b-p]<<endl;
            }else{
                k[i][b] = k[i - 1][b];
               // cout<<k[i][b]<<" not mx "<<w[i-1]<<endl;
            }
            //cout<<w[i]<<" "<<b<<endl;
        }

    }
   // cout<<n[k][B]<<endl;
    return k[n][B];
}
int main()
{
    int n ,t,i,j,ferry_length;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&ferry_length);
        int a[1005];
        i = 0;
        while(scanf("%d",&a[i]) && a[i] != 0)
        {
            a[i]/=100;
            //cout<<a[i]<<endl;
            i++;
        }
        printf("%d",knapsack(a,i - 1,ferry_length));
    }

    return 0;
}
