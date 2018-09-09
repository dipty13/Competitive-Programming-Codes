#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a,c,k;
    while(cin>>n>>k)
    {
        c = 0;
        int a[n+5];
        for(i = 1;i<=n;i++)
        {
            cin>>a[i];
        }
        int dis = 0;
        for(i = 1;i<=n;i++)
        {
            if(a[i]==1)
            {
                dis = i - k;
                j = k - dis;
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
