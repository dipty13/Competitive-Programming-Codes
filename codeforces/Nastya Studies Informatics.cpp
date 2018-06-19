#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,r,x,y,xx,yy,i,c,j;

    while(cin>>l>>r>>x>>y)
    {
        c=0;
        for(i=l;i<=r;i++)
        {
            xx = __gcd(i,l);
//            yy = y%i;
            if(xx==i)
            {
                //cout<<i<<" "<<
                c++;
            }

        }
        cout<<c<<endl;
    }
    return 0;
}

