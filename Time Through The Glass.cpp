#include<bits/stdc++.h>
using namespace std;
int main()
{

    int h,m,x,y;
    cin>>h>>m;
    if(h==0||h==6)
    {
        x=h;
    }
    else if(h>0&&h<6)
       {
           x=12-h;
       }else{
           x=6-(h-6);
       }
    if(m==0||m==30)
    {
        y=m;
    }
       else if(m>0&&m<30)
       {
           y=60-m;
       }
       else{
            y=30-(m-30);
       }

    cout<<x<<" "<<y<<endl;
    return 0;
}
