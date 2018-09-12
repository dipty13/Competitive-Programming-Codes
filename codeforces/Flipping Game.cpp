#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int solve(int a[],int n)
{
    int l[n+5],i,x =0,y=0;
    for(i = 1;i<=n;i++)
    {
        if(a[i]==1)
        {
            if(x>0)
            {
                x--;
            }
        }else{
            x++;
        }
        y = max(x,y);

    }


   return y;
}
int main()
{
    ll n,i,j,k,c;
    while(cin>>n)
    {
        int a[n+5];
        for(i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
       cout<<solve(a,n)<<endl;
    }
    return 0;
}
