#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c=0,i,j;
    cin>>t;
    while(t--)
    {
        char s[105][1055];
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>s[i][j];
            }
        }
        c = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i-1>=0&&s[i][j]!=s[i-1][j])
                {

                }else if(i-1<0)
                {

                }else{
                    c = 1;
                    break;
                }
                if(j-1>=0&&s[i][j]!=s[i][j-1])
                {

                }
                else if(j-1<0)
                {

                }else{
                    c = 1;
                    break;
                }
                 if(i+1<n&&s[i][j]!=s[i+1][j])
                 {

                 }
                 else if(i+1>=n)
                {

                }else{
                    c = 1;
                    break;
                }
                 if(j+1<n&&s[i][j]!=s[i][j+1])
                 {

                 }else if(j+1>=n)
                {

                }else{
                    c = 1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(c)
        {
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    }
    return 0;
}
