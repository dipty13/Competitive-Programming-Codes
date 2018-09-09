#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i,j,h,c,s;
    while(cin>>a>>b)
    {
        h = 0;
        c = 0;
       while(a>0){
         h += a;
         c += a;
         a =  c/ b;
         c %= b;
       }
       cout<<h<<endl;
    }
    return 0;
}
