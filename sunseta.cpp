#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i,j,k=0;
    cin>>t;
    while(t--)
    {
        string a;
        long long int b,num=0,ans,x;
        cin>>a>>b;
        i=0;
        if(a[0]=='-')
        {
            i=1;
        }
        while(i<a.size())
        {
            num += a[i]-48;
            ans= num%b;
           num = ans*10;
            i++;
        }
        if(ans==0)
        {
            cout<<"Case "<<++k<<": divisible\n";
        }
        else{
            cout<<"Case "<<++k<<": not divisible\n";
        }
    }
    return 0;
}
