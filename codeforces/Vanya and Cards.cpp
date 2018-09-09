#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,m,x,sum;
    while(cin>>n>>m)
    {
        int a[n+5];
        sum = 0;
       for(i= 0;i<n;i++)
       {
           cin>>a[i];
           sum+= a[i];
       }
        cout<<(abs(sum)+m-1)/m<<endl;
    }
    return 0;
}
