#include<bits/stdc++.h>
using namespace std;
map<string,int> level;
map<string,string> paths;

int bfs(string s,string d, map<string,vector<string> >adj)
{

    string x;
    //memset(level,"-1",sizeof(level));
    queue<string> q;
    q.push(s);
    level[s]=1;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
         if(x == d)
      return level[x];

        int xx = adj[x].size();
        for(int i=0;i<xx;i++)
        {
            string xxx = adj[x][i];
            if(level[xxx]==-1)
            {
                level[xxx]=level[x]+1;
                paths[xxx]=x;
                q.push(xxx);
            }
        }
    }
    return -1;
}
void shortestPath(string s,string d)
{
        if(s!=d){

        shortestPath(paths[s],d);

        cout<<paths[s]<<" "<<s<<endl;
        }
        else
            return;


}
int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);
    string a,b;
    int n,i;
    int lock=0;
    while(cin>>n)
    {
        map<string,vector<string> > adj;

        //getchar();
        //cin.ignore();
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
            level[a]=-1;
            level[b]=-1;
        }


        cin>>a>>b;
        int x=bfs(a,b,adj);
        if(lock)
        {
            printf("\n");
        }
        else
            lock=1;

        // cout<<x<<endl;

        if(x!=-1){
            shortestPath(b,a);
        }
        else{
            printf("No route\n");
        }


        //adj.clear();
       // level.clear();
       // paths.clear();
    }
    return 0;
}
