#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    while(cin>>n>>m)
    {
        char a[n+5][m+5];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        int c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                map<char,int> mm;
                int p=0;
                if(a[i][j]>='1'&&a[i][j]<='8')
                    {
                        p=(int)a[i][j]-48;
                if(i-1>=0&&j-1>=0&&a[i-1][j-1]=='*')
                 {
                    mm['*']++;
                 }
                 if(i-1>=0&&a[i-1][j]=='*')
                 {
                    mm['*']++;
                 }
                 if(i-1>=0&&j+1<m&&a[i-1][j+1]=='*')
                 {
                    mm['*']++;
                 }
                  if(j-1>=0&&a[i][j-1]=='*')
                 {
                    mm['*']++;
                 }
                 if(j+1<m&&a[i][j+1]=='*')
                 {
                    mm['*']++;
                 }
                 if(i+1<n&&j-1>=0&&a[i+1][j-1]=='*')
                 {
                    mm['*']++;
                 }

                 if(i+1<n&&a[i+1][j]=='*')
                 {
                    mm['*']++;
                 }
                 if(i+1<n&&j+1<m&&a[i+1][j+1]=='*')
                 {
                    mm['*']++;
                 }
                }

                 else if(a[i][j]=='.')
                    {
                if(i-1>=0&&j-1>=0&&a[i-1][j-1]=='*')
                 {
                    mm['*']++;
                 }
                 if(i-1>=0&&a[i-1][j]=='*')
                 {
                    mm['*']++;
                 }
                 if(i-1>=0&&j+1<m&&a[i-1][j+1]=='*')
                 {
                    mm['*']++;
                 }
                  if(j-1>=0&&a[i][j-1]=='*')
                 {
                    mm['*']++;
                 }
                 if(j+1<m&&a[i][j+1]=='*')
                 {
                    mm['*']++;
                 }
                 if(i+1<n&&j-1>=0&&a[i+1][j-1]=='*')
                 {
                    mm['*']++;
                 }

                 if(i+1<n&&a[i+1][j]=='*')
                 {
                    mm['*']++;
                 }
                 if(i+1<n&&j+1<m&&a[i+1][j+1]=='*')
                 {
                    mm['*']++;
                 }
                }

                if(p!=0){

                if(p!=mm['*'])
                {
                    c=1;
                    break;
                }}else if(mm['*']!=NULL){
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(c==1)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
    return 0;
}
