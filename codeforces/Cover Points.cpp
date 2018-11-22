
#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n,m,y,z,i,k,j,x,c,a,b;
    while(cin>> n)
    {
        m = 0,c = 0;
        for( i = 0 ;i < n;i++)
        {
            cin>>a>>b;
            c =  a + b;
            m = max(m,c);
        }
        cout<<m<<endl;
    }
    return 0;
}
