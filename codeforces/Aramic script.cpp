#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c;
    string s[10005];
    while(cin>>n)
    {

        set<string> ss;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        string p="";
        set<char>::iterator it;
        for(i=0;i<n;i++)
        {
             set<char> m;
             p="";
             int x=s[i].size();
            for(j=0;j<x;j++)
            {
                m.insert(s[i][j]);
            }
            for(it=m.begin();it!=m.end();it++)
            {
                p+=*it;
            }
            ss.insert(p);
        }
        cout<<ss.size()<<endl;
    }
    return 0;
}
