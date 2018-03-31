#include<bits/stdc++.h>
using namespace std;
int main()
{
   double h,m,i;
    char c;
    double a,b,d;
    while(cin>>h>>c>>m)
    {
        if(h==0&&m==0)
        {
            break;
        }
        a= (h*30)+(m/2);
        b=m*6;
        d=a-b;
        if(d<0)
        {
            d*=-1;
        }
        if(d>180)
        {
            d=360-d;
        }

        cout<<fixed<<setprecision(3)<<d<<endl;
    }
    return 0;
}
