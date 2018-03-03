#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,c,x,y;
    string s;
    while(cin>>n>>s)
    {
        c=0;
        for(i=0;i<s.size();i++)
        {
            x=0,y=0;
            for(j=i;j<s.size();j++)
            {
                //for(k=i;k<=j;k++)
                //{
                    if(s[j]=='U')
                    {
                        y++;
                    }
                    else if(s[j]=='D')
                    {
                        y--;
                    }
                    else if(s[j]=='R')
                    {
                        x++;
                    }
                    else if(s[j]=='L')
                    {
                        x--;
                    }
               // }
                if(x==0&&y==0)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
