#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b,i,j,k;
    while(cin>>n>>m)
    {
        a=n,b=m;
       while(true)
        {
            if(a==0||b==0)
            {
                break;
            }
            else if(a>=2*b){
                a %=(2*b);

            }
            else if(b>=2*a)
            {
                b %=(a*2);
            }
            else{
                break;
            }
        }
//        }
//        int x=n,y=m;
//        if(n>m)
//        {
//            x = max(n/m,n%m);
//        }
//        else{
//            y = max(m/n,m%n);
//        }
        cout<<a<<" "<<b<<endl;
        //cout<<x<<" xy "<<y<<endl;

    }
    return 0;
}
