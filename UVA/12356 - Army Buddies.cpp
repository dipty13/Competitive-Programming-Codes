#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(false);
    int s,b,l[100005],j,r[100005],k,ls[100005],rs[100005];
    //map<int,int> m;
    while(cin>>s>>b&&(s!=0&&b!=0))
    {
        for(int i=0;i<=s;i++)
        {
            ls[i]=i-1;
            rs[i]=i+1;
        }
        for(int i=0;i<b;i++)
        {
            cin>>l[i]>>r[i];
            if(ls[l[i]]<1)
            {
                cout<<"* ";
            }
            else{
                cout<<ls[l[i]]<<" ";
            }
            if(rs[r[i]]>s)
            {
                cout<<"*\n";
            }
            else{
                cout<<rs[r[i]]<<"\n";
            }
            ls[rs[r[i]]] = ls[l[i]];
            rs[ls[l[i]]]=rs[r[i]];
        }

        cout<<"-\n";
       // m.clear();
    }
    return 0;
}
