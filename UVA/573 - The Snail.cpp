#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,u,d,f,i,j,c=0;
    double ih,ft,u1,d1,f1;
    while(cin>>h>>u>>d>>f&&h!=0)
    {
        ft=(f/100.0)*u;
        //cout<<ft<<endl;
        c=1;
        u1=(double)u,d1=0,f1=(double)(u-d);
        ih=0;
        //cout<<ih<<" "<<u1<<" "<<d1 <<" "<<f1<<endl;
        i=0;
        while(1)
        {
            i++;
            d1+=u1;
            if(d1>h)
            {
                break;
            }
            d1-=d;
            if(d1<0)
            {
                c=0;
                break;
            }
            u1-=ft;
            if(u1<0)
            {
                u1=0;
            }
        }
        if(c==1)
        {
            cout<<"success on day "<<i<<endl;
        }
        else{
            cout<<"failure on day "<<i<<endl;
        }

    }
    return 0;
}
