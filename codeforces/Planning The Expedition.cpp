#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m,k,j,c;
    while(cin>>n>>m)
    {
        int a[m+5];
        map<int,int> mp;
        map<int,int>::iterator it;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            mp[a[i]]++;

        }
        if(m<n)
        {
            cout<<0<<endl;
            continue;
        }
        //cout<<mp[1]<<endl;
        int mx = 0,c =0;
         for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1){
                mx += it->second;
                c = 1;
            }
        }
        if(c==0)
        {
            cout<<1<<endl;
        }else{
            cout<<mx/n<<endl;
        }

    }
    return 0;
}
