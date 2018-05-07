#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c;
    string s[20000],p,q;
    map<char,int> m;
    cin>>n;
    i=0;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>p;
    int x= p.size(),y=0;
    for(i=0;i<x;i++)
    {
        m[p[i]]++;
    }
    int l=0;
    c=0;
    for(i=0;i<n;i++)
    {
        //c=0;
        y=s[i].size();
        for(j=0;j<y;j++)
        {
            if(m[s[i][j]]==0)
            {
                //m[s[i][j]]--;
                c++;
            }else{
                m[s[i][j]]--;
            }
        }
        l+=y;
    }

    if(x>=l)
    {
        cout<<c<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}
