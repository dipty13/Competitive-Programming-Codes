#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    while(cin>>n)
    {
        long long int a[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                a[i] = a[i]-1;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
