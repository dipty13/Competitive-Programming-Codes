#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , a[1000],i,sum,c=0;
    cout<<"PERFECTION OUTPUT\n";
    while(cin>>n&&n)
    {
        sum=0,c=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
            if(sum>n)
            {
                c=1;
                break;
            }
        }
        printf("%5d ",n);
        if(c)
        {
            cout<<"ABUNDANT\n";
        }
        else if(sum==n)
        {
            cout<<"PERFECT\n";
        }else{
            cout<<"DEFICIENT\n";
        }
    }
    cout<<"END OF OUTPUT\n";
    return 0;
}
