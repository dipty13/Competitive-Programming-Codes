#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int>& a,pair<int,int>& b)
{
    if(a.second==b.second)
    {
        return a.first < b.first;
    }
    return a.second>b.second;
}
int main()
{
    int n,i,j,c,s,x,e,g,m,h;
    while(cin>>n)
    {
        int a = 0;
        vector<pair<int,int> > p;
        for(i=0;i<n;i++)
        {
            cin>>e>>g>>m>>h;
            a = e+g+m+h;
//            p.first = i+1;
//            p.second = a;
            p.push_back(make_pair(i+1,a));
        }
        sort(p.begin(),p.end(),cmp);
        for(i=0;i<n;i++)
        {
            if(p[i].first  == 1)
            {
                cout<< i+1 <<endl;
            }
        }
    }
    return 0;
}

