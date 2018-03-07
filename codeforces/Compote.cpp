#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,a,p,x,i,j;
    while(cin>>l>>a>>p)
    {
        x=0;
        while(l>=1&&a>=2&&p>=4)
        {
            x +=1+2+4;
            l-=1;
            a-=2;
            p-=4;
        }
        cout<<x<<endl;
    }
    return 0;
}
