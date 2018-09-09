/**
    by Shaila Nasrin Dipty
    Date: 7/9/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,s,x,y,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y;

        a = 1;
        b = 1;

        long long int p = 1,q=1;
        while(a<n)
        {
            a+=x;
        }
        while(b<m)
        {
            b+=y;
        }
        if(a>n)
        {
            a-=x;
        }
        if(b>m)
        {
            b-=y;
        }
        cout<<a<<" "<<b<<endl;
        if(a==n&&b==m){
            cout<<"Chefirnemo\n";
        }
        else if(a+1==n&&b+1==m){
            cout<<"Chefirnemo\n";
        }
        else{
            cout<<"Pofik\n";
        }
    }
    return 0;
}
