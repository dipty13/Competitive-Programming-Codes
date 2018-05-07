#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return p1.second < p2.second;
}
int main()
{
    int t,n,a[10005],x,i,j,m,sum,y;
    cin>>t;
    while(t--)
    {
      cin>>x>>y;

      int l=x,k=y;
//        if(x==y)
//        {
//            cout<<x+y<<endl;
//        }else{
//            if(x>y)
//            {
//                while(x!=y){
//                while(x>y)
//                {
//                    x-=y;
//                   // cout<<x<<" xx"<<y<<endl;
//                }
//                while(y>x)
//                {
//                    y-=x;
//                    //cout<<x<<" yy"<<y<<endl;
//                }
//                }
//                cout<<x+y<<endl;
//            }
//            if(x<y)
//            {
//                while(x!=y){
//                while(x<y)
//                {
//                    y-=x;
//                }
//                while(y<x)
//                {
//                    x-=y;
//                }
//                }
//                cout<<x+y<<endl;
//            }
//        }

        int p = __gcd(l,k);
        cout<<p*2<<endl;
    }
    return 0;
}
