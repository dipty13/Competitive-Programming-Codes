#include<bits/stdc++.h>
using namespace std;
void allPattern(int n)
{
    int a[n+5],i,j,p;
    memset(a,-1,sizeof(a));
    for( i=1;i<=n;i++)
    {
        if(i%2){
            p = 2;
        }else{
            p = 1;
        }
        for(j=p;j<=n;j+=2)
        {
            a[j] = 0;
            cout<<j<<endl;
        }

    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==-1)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n,i,j;
    n = 5;
    for(i=5;i<=n;i++)
    {
        allPattern(i);
    }
    return 0;
}
