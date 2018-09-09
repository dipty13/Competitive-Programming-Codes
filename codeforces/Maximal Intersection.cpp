#include<bits/stdc++.h>
using namespace std;
int solve(vector<pair<int,int> > v, int n, multiset<int> l,multiset<int> r)
{
    int i,x = 0,j,c;
    for( i = 0; i < n; i++)
    {
        l.erase(l.find(v[i].first));
        r.erase(r.find(v[i].second));
        //cout<<*r.begin() <<" "<< *--l.end()<<endl;
        x = max(x, *r.begin() - *--l.end());
        l.insert(v[i].first);
        r.insert(v[i].second);
    }
    return x;
}
int main()
{
    int n,i,j,c,k;
    while(cin>>n)
    {
        vector<pair<int,int> > v(n);
        multiset<int> l,r;
        for(i = 0; i<n; i++)
        {
            cin>>v[i].first>>v[i].second;
            l.insert(v[i].first);
            r.insert(v[i].second);

        }

        cout<<solve(v,n,l,r)<<endl;
    }
    return 0;
}

