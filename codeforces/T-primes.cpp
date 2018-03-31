#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a[100005];
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            long long int x = __gcd(a[i]);
            long long int y = a[i]/x;
            if(x!=1&&y!=x)
            {
                cout<<"No\n";
            }
            else if(x!=1){
                cout<<"Yes\n";
            }
        }
    }
    return 0;
}
