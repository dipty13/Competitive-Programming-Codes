#include<bits/stdc++.h>
using namespace std;
vector<int> adj[25];
//int paths[100];
int bfs(int source,int destination)
{
    int x,i;
    int level[25];
    memset(level,-1,sizeof(level));
    queue<int> q;
    level[source]=0;
    q.push(source);
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        for(i=0;i<adj[x].size();i++)
        {
            if(level[adj[x][i]]==-1)
            {
                level[adj[x][i]]=level[x]+1;
                //paths[adj[x][i]]=x;
                q.push(adj[x][i]);
            }
        }
    }
    return level[destination];

}
int main()
{
    int n,a,b,i,c,cs=0;
    while(1)
    {
        for(i=1;i<20;i++)
        {
            cin>>a;
            n=a;
            if(n==EOF)
            {
                return 0;
            }
            while(a--)
            {
                cin>>b;
                adj[i].push_back(b);
                adj[b].push_back(i);
            }
        }
        cin>>c;
        cout<<"Test Set #"<<++cs<<endl;
        while(c--)
        {
            cin>>a>>b;
            printf("%2d to %2d: %d\n",a,b,bfs(a,b));
        }
        cout<<endl;
        for (int i = 0; i < 25; i++)
            adj[i].clear();
    }

}
