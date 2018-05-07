#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c[10005],t[10005],i,b=0,bt=0,mn=INT_MAX,x = INT_MAX,ct=0,o=0,tw=0,y=INT_MAX;
    map<int ,long long int> m;
    vector<int> v[10005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c[i];
        m[i] = c[i];
        //cout<<m[i]<<endl;
    }
      for(i=0;i<n;i++)
    {
        cin>>t[i];
        v[t[i]].push_back(c[i]);
    }
    sort(v[1].begin(),v[1].end());
    sort(v[2].begin(),v[2].end());
    sort(v[3].begin(),v[3].end());
    if(v[1].size()!=0&&v[2].size()!=0)
    {
        x = v[1][0]+v[2][0];
    }
    if(v[3].size()!=0){
        y = v[3][0];
    }

    mn = min(y,x);
    cout<<mn<<endl;
    return 0;
}
