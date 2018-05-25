#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,x;

    while(cin>>n)
    {
        x = n+1;
        if(x==1)
        {
            cout<<0<<endl;
        }
        else if(x%2==0)
        {
            cout<<x/2<<endl;
        }else{
            cout<<x<<endl;
        }
    }
    return 0;
}
