#include<bits/stdc++.h>
using namespace std;
int knapsack(int w[],int  n,int B)
{
    int k[B+5],i,b;
    for(b = 0; b <= B; b++)
    {
        k[b] = 0;
        for(i = 1; i <= n; i++)
        {
            if(w[i - 1] <= b)
            {
                k[b] = max(w[i-1] + k[b - w[i-1]],k[b]);
            }
        }

    }
    return k[B];
}
int main()
{
    int t,n,i,B;
    cin>>t;
    while(t--)
    {
        cin>>n>>B;
        int w[n+5],v[n+5];
//        for(i=0; i<n; i++)
//        {
//            cin>>v[i];
//        }
        for(i=0; i<n; i++)
        {
            cin>>w[i];
        }
        cout<<knapsack(w,n,B)<<endl;

    }
    return 0;
}
