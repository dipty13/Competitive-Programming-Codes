#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a[100010],i;
    long long int x = 1;
    cin>>n>>q;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
        x&=a[i];
    }

    cout<<x<<endl;
    return 0;
}
