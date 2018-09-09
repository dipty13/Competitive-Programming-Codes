/**
    by Shaila Nasrin Dipty
    Date: 4/9/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a = 0;
        while(n--)
        {
            cin>>i>>sum;
            a += (i - sum);
        }
        cout<<a<<endl;
    }
    return 0;
}
