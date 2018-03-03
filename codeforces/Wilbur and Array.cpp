#include<bits/stdc++.h>
using namespace std;
long long int b[2000005];
int main()
{
    long long int n,i,j,c,x;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>b[i];

        }
        x=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                x+=abs(b[i]);
            }
            else{
                x+=abs(b[i]-b[i-1]);
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
