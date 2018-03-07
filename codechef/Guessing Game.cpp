#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,m,i,j,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x = (n/2)*((m+1)/2) +(m/2)*((n+1)/2);
        y = n*m;
        z = __gcd(x,y);
        cout<<x/z<<"/"<<y/z<<endl;

    }

    return 0;
}
