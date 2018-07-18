#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,x,y,j,i;
    while(cin>>n>>a>>b)
    {
        j = 0;
        for(i=0;i*a<=n;i++)
        {
            x = n - (i*a);
            if(x%b==0)
            {
                cout<<"YES\n";
                y = x/b;
                x = i;
                cout<<x<<" "<<y<<endl;
                j = 1;
                break;
            }
        }
        if(j==0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
