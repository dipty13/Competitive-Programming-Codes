#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>m;
        int a[m+5],b[m+5];
        memset(b,0,sizeof(b));
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            if(i==0){
                b[i] = a[i];
            }else{
            b[i]=b[i-1]+a[i];
            }
            //cout<<b[i]<<" "<<b[i-1]<<" "<<a[i]<<endl;
        }
        int x=0;
        for(i=0;i<m;i++)
        {
            if(i==0&&k<=b[i])
            {
                cout<<i+1<<endl;
                x=1;
                break;
            }
            else if(k>=b[i-1]+1&&k<=b[i])
            {
                //cout<<b[i-1]<<" "<<b[i]<<endl;
                cout<<i+1<<endl;
                x=1;
                break;
            }
        }
//        if(x==0)
//        {
//            cout<<0<<endl;
//        }
    }
    return 0;
}
