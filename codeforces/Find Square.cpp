#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,k,m;
    while(cin>>n>>m)
    {
        char s[n+5][m+5];
        vector<pair<int,int> > p;
        map<char,int> mp;
        for(i = 1;i<= n;i++)
        {
            for(j = 1;j <= m;j++)
            {
                cin>>s[i][j];
                //mp[s[i][j]]++;
                if(s[i][j]=='B'){
                p.push_back({i,j}) ;
                }

            }
        }

        k = p.size()/2;
        //cout<<p.size()<<endl;
        cout<<p[k].first<<" "<<p[k].second<<endl;

    }
    return 0;
}
