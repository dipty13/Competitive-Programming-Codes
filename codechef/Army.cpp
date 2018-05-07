#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d[1005],sum,i,j,a,b;
    while(cin>>n)
    {
        sum=0;
        for(i=1;i<n;i++)
        {
            cin>>d[i];
        }
        cin>>a>>b;
        for(i=a;i<b;i++)
        {
            sum+=d[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
