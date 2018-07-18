#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,s,m;
    while(cin>>n>>m)
    {
        int c[n+5],a[m+5];
        for(i=0;i<n;i++)
        {
            cin>>c[i];
        }
        queue<int> q;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            q.push(a[i]);
        }
        int cnt = 0;
        for(i=0;i<n;i++)
        {
            if(q.empty())
            {
                break;
            }
            int p = q.front();
            if(p<c[i])
            {
                continue;
            }else{
                q.pop();
                cnt++;
            }
        }
       cout<<cnt<<endl;
    }
    return 0;
}
