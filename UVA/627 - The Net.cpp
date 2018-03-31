#include<bits/stdc++.h>
using namespace std;
int path[1000];
int bfs(int s,int d,vector<int> adj[])
{
    int i;
    int level[1000];
    memset(level,-1,sizeof(level));
    queue<int> q;
    level[s]=0;
    q.push(s);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        if(x==d)
        {
            return level[d];
        }
        int xx=adj[x].size();
        for(i=0;i<xx;i++)
        {
            int xxx=adj[x][i];
            if(level[xxx]==-1)
            {
                level[xxx]=level[x]+1;
                path[xxx] = x;
                q.push(xxx);
            }
        }
    }
    return -1;
}
void shortestPath(int noPaths,int d)
{
    if(noPaths==1)
    {
        cout<<path[d]<<" ";
    }
    else{
        shortestPath(noPaths-1,path[d]);
        cout<<path[d]<<" ";
    }
}
int main()
{
    cin.tie(0);
    int a,b,i,x,n,j;
    char c;
    string p;
    while(cin>>n)
    {
        vector<int> adj[1000];
        for(i=0;i<n;i++)
        {
            cin>>a;
            getline(cin,p);
            stringstream s(p);
            int q;
            while(s>>c>>q)
            {
                adj[a].push_back(q);
            }

        }
        cin>>x;
        cout << "-----\n";
        for(i=0;i<x;i++)
        {
            cin>>a>>b;
            j=bfs(a,b,adj);
            if(j==-1)
            {
                cout<<"connection impossible\n";
            }
            else{

            shortestPath(j,b);
            cout<<b<<endl;
            }

        }

    }
    return 0;
}
