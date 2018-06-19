#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,ans;
    while(cin>>n)
    {
        int a[n+5],b[n+5];
        memset(b,0,sizeof(b));
        double x = 0;
        int p = 0;
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i];
             p = a[i];
            b[p]++;

        }
        ans  = b[4]+b[3];
        b[1] = max(0,b[1]-b[3]);
        ans += b[2]/2;

        if(b[2]%2){
            ans++;
            b[1]-=2;
            b[1]=max(0,b[1]);
        }
        ans += (b[1]+3)/4;
        cout<<ans<<endl;
    }
    return 0;
}
