#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,dx,dy,x,y;
    while(cin>>k&&k)
    {
        cin>>dx>>dy;
        while(k--)
        {
            cin>>x>>y;
            if(dx<x&&dy<y)
            {
                cout<<"NE\n";
            }
            else if(dx==x||dy==y)
            {
                 cout<<"divisa\n";
            }
            else if(dx>x&&dy<y)
            {
                 cout<<"NO\n";
            }
            else if(dx>x&&dy>y)
            {
                 cout<<"SO\n";
            }
            else if(dx<x&&dy>y)
            {
                 cout<<"SE\n";
            }
        }
    }
    return 0;
}
