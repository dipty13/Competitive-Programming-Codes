
#include<bits/stdc++.h>
using namespace std;
int knapsack(int v[],int w[],int  n,int B)
{
    int k[B+5],i,b;
    for(b = 0; b <= B; b++)
    {
        k[b] = 0;
        for(i = 1; i <= n; i++)
        {
            //cout<<w[i-1]<<" "<<k[b]<<endl;
            if(v[i - 1] <= b)
            {
                k[b] = max(w[i-1] + k[b - v[i-1]],k[b]);


            }
        }
       // cout<<k[b]<<" "<<endl;
    }
    return k[B];
}
int main()
{
    int t,n,i,B,x[10005];
    cin>>t;
    while(t--)
    {
        cin>>B>>n;
        int w[n+5],v[n+5];
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>w[i];

        }
        cout<<knapsack(v,w,n,B)<<endl;

  }
    return 0;
}
