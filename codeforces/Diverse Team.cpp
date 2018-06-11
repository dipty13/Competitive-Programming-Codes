#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[100005],k;
    while(cin>>n>>k)
    {
        map<int,int> mn,m;
        map<int,int>::iterator it;
        set<int> s;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
           // m[a[i]]++;
            if(mn[a[i]]==NULL){
                mn[a[i]] = i;
                s.insert(a[i]);
            }

        }

       //n = unique(a+1,a+n+1)-1;
        int x = s.size();
        if(x<k)
        {
            cout<<"NO\n";
        }else{
            j=1;
            cout<<"YES\n";
            for(it=mn.begin();it!=mn.end();it++)
            {
                if(j==1&&j<=k)
                {
                    cout<<it->second;
                    j++;
                }
            else if(j<=k)
            {
                cout<<" "<<it->second;
               j++;
            }
            }
            cout<<endl;
        }

    }
    return 0;
}
