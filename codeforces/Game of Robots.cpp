#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,k,n,j,c;
    while(cin>>n>>k)
    {
        long long int a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
       for(i=1;i<=n;i++)
       {
           if(k<=i)
           {
               cout<<a[k]<<endl;
               break;
           }
           k-=i;
       }


     }
    return 0;
}
