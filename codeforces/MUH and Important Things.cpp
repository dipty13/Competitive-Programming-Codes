#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,c;
    while(cin>>n)
    {
        int h[n+5];
        vector<pair<int,int> > p;
        map<int,int> m;
        for(i = 1;i <= n;i++)
        {
            cin>>h[i];
            p.push_back({h[i],i});
            m[h[i]]++;

        }
        if(n - m.size() < 2)
        {
            cout<<"NO\n";
            continue;
        }
        sort(p.begin(),p.end());
        int c = 0;
        cout<<"YES\n";
        for(i = 0 ;i < p.size();i++)
        {
            cout<<p[i].second<<" ";
            if(c ==0 &&i>0&&p[i-1].first == p[i].first )
            {
                swap(p[i-1],p[i]);
                p[i-1].first = -p[i-1].first;
                //p[i].first = -p[i].first;
                c = 1;
            }
        }
        cout<<endl;
        c = 0;
        for(i = 0 ;i < p.size();i++)
        {
            cout<<p[i].second<<" ";
            if(c ==0 && i>0 && p[i-1].first > 0 && p[i-1].first == p[i].first )
            {
                swap(p[i-1],p[i]);
                p[i-1].first = -p[i-1].first;

                c = 1;
            }
        }
        cout<<endl;
         for(i = 0 ;i < p.size();i++)
        {
            cout<<p[i].second<<" ";
        }
        cout<<endl;
    }

    return 0;
}
