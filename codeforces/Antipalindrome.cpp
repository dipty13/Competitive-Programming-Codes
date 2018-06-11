#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,mx;
    string s,x,y;
    while(cin>>s)
    {
        x="",y="";
        mx = -1;
        for(i=1;i<s.size();i++)
        {
            x = s.substr(0,i+1);
            //cout<<x<<endl;
            y = x ;
            reverse(x.begin(),x.end());
            //cout<<x<<" "<<y<<endl;
            if(x!=y)
            {
                int p = x.size();
                mx = max(mx,p);
                //cout<<x<<" "<<mx<<endl;
            }
        }
        if(mx<=0)
        {
            cout<<0<<endl;
        }else{
            cout<<mx<<endl;
        }

    }
    return 0;
}
