#include<bits/stdc++.h>
using namespace std;
map<int,int> visited;
void bfs(int start,map<int,vector<int> > graph)
{
    queue<int> q;
    int i;
    q.push(start);
    visited[start] = 0;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        int size = graph[x].size();
        for(i=0;i<size;i++)
        {
            int xx = graph[x][i];
            if(!visited.count(xx))
            {
                visited[xx]= visited[x]+1;
                q.push(xx);
            }
        }
    }

}
int main()
{
   // cin.tie();
    int n,a,b,i,k=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        map<int,vector<int> > graph;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        int ttl,start;
        while(cin>>start>>ttl)
        {
            if(start==0 && ttl==0)
            {
                break;
            }
            map<int,int>::const_iterator it;
             visited.clear();
            bfs(start,graph);
             int result = 0;
            for(it=visited.begin();it!=visited.end();it++)
            {
                if((*it).second>ttl)
                {
                    ++result;
                }
            }
            result+=graph.size()-visited.size(); //if no node is connected in graph
            cout<<"Case "<<++k<<": "<<result<<" nodes not reachable from node "<<start<<" with TTL = "<<ttl<<".\n";

        }

    }
    return 0;
}


