#include<bits/stdc++.h>
using namespace std;
/**
* Knapsack with no repetition
* Time complexity: O(nB)
*/
int knapsack(int w[],int  n,int B)
{
    int k[n+5][B+5],i,b;
    for(i = 0;i <= n;i++)
    {
        k[i][0] = 0;
    }
    for(b = 0;b <= B;b++)
    {
        k[0][b] = 0;
    }

    for(i = 1;i <= n;i++)
    {
        for(b = 1;b <= B;b++)
        {
            if(w[i - 1] <= b)
            {
                int p = w[i-1];
                k[i][b] = max(w[i-1] + k[i - 1][b - p],k[i-1][b]);
                //cout<<k[i][b]<<" mx "<<v[i-1]+k[i-1][b-p]<<endl;
            }else{
                k[i][b] = k[i - 1][b];
                //cout<<k[i][b]<<" not mx "<<w[i-1]<<endl;
            }
            //cout<<w[i]<<" "<<b<<endl;
        }

    }
   // cout<<n[k][B]<<endl;
    return k[n][B];
}
int main()
{
    int t,n,i,B;
    cin>>t;
    while(t--){
    cin>>n;
    int w[n+5],v[n+5],sum = 0,diff = 0;
//    for(i=0;i<n;i++)
//    {
//        cin>>v[i];
//    }
    for(i=0;i<n;i++)
    {
        cin>>w[i];
        sum += w[i];
    }
    diff = sum/2;
    int x = knapsack(w,n,diff);
    cout<<(sum - x)- x<<endl;
    }
    return 0;
}
