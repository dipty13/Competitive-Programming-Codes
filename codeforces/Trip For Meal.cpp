#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,x,i,j;
    while(cin>>n>>a>>b>>c)
    {
        x = min(c,min(a,b));
        if(x==a||x==b||n==1)
        {
            x = min(a,b)*(n-1);
        }else{
            x = min(a,b)+c*(n-2);
        }

        cout<<x<<endl;

    }
    return 0;
}
