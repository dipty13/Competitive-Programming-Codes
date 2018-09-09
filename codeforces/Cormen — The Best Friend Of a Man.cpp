#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
#define MX 1e5 + 7
using namespace std;
vector<int> v(MX);
vector<int> l(MX);
int solve(int a[],int n,int k)
{
    int i,j=0;
    l[0] = k;
    l[1] = a[1];
    for(i = 2;i<=n;i++)
    {
        if(a[i]>=k-l[i-1])
        {
            l[i] = a[i];
        }else{
            l[i] = k-l[i-1];
            j+=(k-l[i-1]-a[i]);
        }
    }
    return j;
}
int main()
{
    int n,m,x,i,j,k,c;
    while(cin>>n>>k)
    {
        int a[n+5];
        for( i = 1;i<=n;i++)
        {
            cin>>a[i];
        }
        c = solve(a,n,k);
        cout<<c<<endl;
         for( i = 1;i<=n;i++)
        {
            cout<<l[i]<<" ";
        }
        cout<<endl;
        l.clear();
    }
    return 0;
}
