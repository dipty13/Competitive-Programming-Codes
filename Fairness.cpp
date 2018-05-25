#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,k,x,y,z;

    cin>>a>>b>>c>>k;
    x=a,y=b,z=c;
//    for(long long int i=0;i<k;i++)
//    {
//        a=y+z;
//        b=x+z;
//        c=x+y;
//        x=a;
//        y=b;
//        z=c;
//    }
     x= a+c;
     y=a+b;
    long long int  ans = x-y;
    if(abs(ans)>100000000000000000)
    {
        cout<<" Unfair \n";
    }else{
        cout<<ans<<endl;
    }
    return 0;
}
