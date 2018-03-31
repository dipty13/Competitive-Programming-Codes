#include<bits/stdc++.h>
using namespace std;
//int Grid[11][11];
int fx[]={1,-1,-1,1,-2,-2,2,2};
int fy[]={2,2,-2,-2,1,-1,1,-1};
#define valid(nx,ny) nx>0 && nx<=8 && ny>0 && ny<=8 && level[nx][ny]==0
int bfs(int x,int y,int x2, int y2)
{
    queue<pair<int,int> > q;

    int level[11][11];
    memset(level,0,sizeof(level[0][0])*11*11);

    q.push(make_pair(x,y));

    level[x][y]=0;

    while(!q.empty())
    {
        pair<int,int> top;

        top = q.front();

        q.pop();
         if(top.first == x2&&top.second==y2){
              return level[x2][y2];
         }


        for(int i = 0; i<8; i++)
        {
            int xx = top.first+fx[i];
            int yy = top.second + fy[i];

            if(valid(xx,yy))
            {
                level[xx][yy]=level[top.first][top.second]+1;

                q.push(make_pair(xx,yy));
            }
        }
    }

    return level[x2][y2];

}
int main()
{
    string a,b;
    int x,y,x1,y1;
    while(cin>>a>>b)
    {
        x=(int)a[0]-96;
        y=(int)a[1]-48;
        x1=(int)b[0]-96;
        y1=(int)b[1]-48;
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<bfs(x,y,x1,y1)<<" knight moves."<<endl;

    }
    return 0;
}
