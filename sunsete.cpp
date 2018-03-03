#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i,s,j,k=0,d,x[1005],y[10005],c;
    cin>>s>>n;
    vector<pair<int,int> > v;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        v.push_back(make_pair(x[i],y[i]));
    }
    k=s,c=0;
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(v[i].first<k)
        {
            k+=v[i].second;
        }
        else{
            c=1;
        }
    }
    if(c==0)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
