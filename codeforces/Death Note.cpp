#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,j,n,m,k;
    while(cin>>n>>m)
    {
        int a[n+5],b[n+5];
        memset(b,0,sizeof(b));
        j = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i] =a[i];

        }
        int c[n+5];
         memset(c,0,sizeof(c));
        k = 0;
        for(i=1;i<j;i++)
        {
            if(b[i-1]<m)
            {
                b[i]+=b[i-1];
                c[k] = 0;
                k++;
            }else if(b[i-1]>m){
                c[k]++;
                x = b[i-1] - m;
                while(x>m)
                {
                    x-=m;
                    c[k]++;
                }
                b[i]+=x;
            }else if(b[i-1]==m){
                c[k]++;
                k++;
            }
        }
        for(i=0;i<k;i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
