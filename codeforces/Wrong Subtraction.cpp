#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,x,y;
    while(cin>>n>>k)
    {
        x=n;
        y=0;
        while(k--)
        {
            y=x%10;
            if(y==0)
            {
                x/=10;
            }else{
                x--;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
