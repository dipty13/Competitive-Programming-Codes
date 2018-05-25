#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x;

    while(cin>>n)
    {
       string a,b,c;
       cin>>a>>b>>c;
      map<char,int> m1,m2,m3;
     int ma=-1,mb=-1,mc=-1;
       for(i=0;i<a.size();i++)
       {
           ma = max(ma,++m1[a[i]]);

       }
        for(i=0;i<b.size();i++)
       {
           mb = max(mb,++m2[b[i]]);


       }
        for(i=0;i<c.size();i++)
       {
          mc = max(mc,++m3[c[i]]);

       }
        int p=a.size(),q=b.size(),r=c.size();
        if (n == 1 && ma == p)
        {
            p--;
        }
        if (n == 1 && mb == q)
        {
            q--;
        }
        if (n == 1 && mc == r)
        {
            r--;
        }
        ma = min(ma+n,p);
        mb = min(mb+n,q);
        mc = min(mc+n,r);
        if(ma>mb&&ma>mc)
        {
            cout<<"Kuro\n";
        }
        else if(mb>ma&&mb>mc)
        {
            cout<<"Shiro\n";
        }
        else if(mc>ma&&mc>mb)
        {
            cout<<"Katie\n";
        }
        else{
            cout<<"Draw\n";
        }
    }
    return 0;
}
