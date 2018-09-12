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
    s = 0;
   for(i = 0;i<t;i++)
    {
       // cout<<i<<" "<<t-1<<endl;
        if(i!=0&&i<=t-1)
        {
            cout<<endl;
        }
        cin>>n>>m>>x>>y;
        a = 1;
        b = 1;

       // s = 1;
        if(a==n&&b==m)
        {
           cout<<"Chefirnemo";
           continue;
        }
        if(a+1==n&&b+1==m)
        {
            cout<<"Chefirnemo";
           continue;
        }
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
       // cout<<a<<" "<<b<<endl;
        if(a==n&&b==m)
        {
            cout<<"Chefirnemo";
        }
        else if(a+1==n&&b+1==m)
        {
            cout<<"Chefirnemo";
        }else{
            cout<<"Pofik";
        }

    }
    return 0;
}
