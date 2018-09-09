#include<bits/stdc++.h>
using namespace std;
long long int solve(long long int a[],long long int n)
{
    long long int i,x = 1,j,c = 1;
    for(i = 2;i<=n;i++)
    {
        if(a[i - 1] * 2 >= a[i])
        {
            c++;
        }else{
            c = 1;
        }
        x = max(x,c);
    }
    return x;
}
int main()
{
    long long int n,i,j,c,k;
    while(cin>>n)
    {
        long long int a[n+5];
        for(i = 1;i<=n;i++)
        {
            cin>>a[i];
        }
        cout<<solve(a,n)<<endl;
    }
    return 0;
}

