#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y;
    while(cin>>n)
    {
        map<int,int> p;
        map<int,int> q;
        map<pair<int,int>,int> mp;
         long long int c=0;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            c+= p[x]++;
            c+= q[y]++;
            c-=mp[make_pair(x,y)]++;
        }
        cout<<c<<endl;
    }
    return 0;
}
