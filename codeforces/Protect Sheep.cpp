#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,m,i,j,r,c;
    while(cin>>r>>c)
    {
        string s[505];
        for(i=0;i<r;i++)
        {
            cin>>s[i];
        }
        int x=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(s[i][j]=='W')
                {
                    if(i-1>=0&&s[i-1][j]=='.')
                    {
                        s[i-1][j]='D';
                    }
                    else if(i-1>=0&&s[i-1][j]=='S')
                    {
                        x=1;
                        break;
                    }
                    if(j-1>=0&&s[i][j-1]=='.')
                    {
                        s[i][j-1]='D';
                    }
                    else if(j-1>=0&&s[i][j-1]=='S')
                    {
                        x=1;
                        break;
                    }
                    if(i+1<r&&s[i+1][j]=='.')
                    {
                        s[i+1][j]='D';
                    }
                    else if(i+1<r&&s[i+1][j]=='S')
                    {
                        x=1;
                        break;
                    }
                    if(j+1<c&&s[i][j+1]=='.')
                    {
                        s[i][j+1]='D';
                    }
                    else if(j+1<c&&s[i][j+1]=='S')
                    {
                        x=1;
                        break;
                    }
                }
            }
            if(x==1)
            {
                break;
            }
        }
        if(x==1)
        {
            cout<<"No\n";
        }
        else{
                cout<<"Yes\n";
            for(i=0;i<r;i++)
            {
                cout<<s[i]<<endl;
            }
        }
    }
    return 0;
}
