#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a,b,c,cnt,p;
    string s;
    while(cin>>n>>p>>s)
    {
        cnt = 0;
       for(i=0;i<n;i++)
       {
           if(i+p<n&&s[i]=='.'&&s[i+p]=='.'){
                cnt = 1;
                s[i]='1';
                s[i+p] = '0';
           }
           else if(i+p<n&&s[i]!=s[i+p])
           {
               cnt = 1;
               if(s[i]=='.'&&s[i+p]=='1')
               {
                   s[i] = '0';
               }else if(s[i]=='.'&&s[i+p]=='0')
               {
                   s[i] = '1';
               }
               else if(s[i]=='1'&&s[i+p]=='.')
               {
                   s[i+p] = '0';
               }else if(s[i]=='0'&&s[i+p]=='.')
               {
                   s[i+p] = '1';
               }
               else if(s[i]=='.'&&s[i+p]=='.')
               {
                   s[i+p] = '1';
                   s[i] = '0';
               }

           }


       }
       if(cnt)
       {
           for(i=0;i<n;i++)
           {
               if(s[i]=='.')
               {
                   s[i] = '0';
               }
           }
           cout<<s<<endl;
       }else{
           cout<<"No\n";
       }
    }

    return 0;
}

