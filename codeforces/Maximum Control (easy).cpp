#include<bits/stdc++.h>
using namespace std;
long long int n,x[1000005],y,i,j,p,q;
int main()
{

    while(cin>>n>>p)
    {
        q=0,y=0;
        long long int c=0,d=0,all=0,sumAll,mx=-100000;
        memset(x,0,sizeof(x));
        for(i=1;i<=n;i++)
        {
            cin>>x[i];
            if(i<=n/2)
            {
                c+=(x[i]%p);
            }else{
                d+=(x[i]%p);
            }
            long long int k1,k2;
            k1 = c%p;
            k2 = d%p;
            mx = max(mx,((k1+k2)%p));
        }
        q=d%p;
//       // cout<<q<<" "<<d<<endl;
        y=c%p;
//        sumAll = all%p;
//        if(q+y>sumAll)
//        {
//            cout<<q+y<<endl;
//        }else{
//        //cout<<y<<" "<<c<<endl;
//        cout<<sumAll<<endl;
//        }
        mx = max(mx,(q+y)%p);
        cout<<mx<<endl;
    }
    return 0;
}
