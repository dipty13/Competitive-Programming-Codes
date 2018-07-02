#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,b,c,cnt,sum;
    while(cin>>n)
    {
        int a[n+5];
        sum = 0 ;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        double x = (double)sum/n;
        if(x>=4.5)
        {
            cout<<0<<endl;
            continue;
        }
        sort(a,a+n);
        int p = sum;
        //cout<<p<<endl;
        double  q =0.0;
        while(q<4.5)
        {
            p++;
            q = (double)p/n;
            //cout<<q<<endl;
        }
        int  k = p - sum;
        //cout<<p<<endl;
        cnt = 0,c =0;
        int f =0;
        q = (double)sum/n;
        for(i=0;i<n;i++)
        {
            if(q>=4.5)
            {
                f =1;
                break;
            }
            if(a[i]<5)
            {
                cnt = (5-a[i]);
                //p = cnt;
                //cout<<cnt<<endl;
                sum+=cnt;
                q = (double)sum/n;;
                c++;
                //cout<<sum<<" "<<c<<endl;
            }
            if(sum>=p)
            {

                f = 1;
               // cout<<sum<<endl;
                break;
            }
        }
        if(f==0)
        {
            cout<<c+(p%n)<<endl;
        }else{
            cout<<c<<endl;
        }

    }

    return 0;
}
