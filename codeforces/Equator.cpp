#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200000],i,j;
    while(cin>>n)
    {
        long long int sum=0,x,y=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        x = sum/2;

        for(i=1;i<=n;i++)
        {
            y+=a[i];
            if(y>=x)
            {
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}
