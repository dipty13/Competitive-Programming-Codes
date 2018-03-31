#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i,j,y;
    while(cin>>s)
    {
        y = s.size();
        string x="";
        j=y-1;
        for(i=y-1;i>=0;i--)
        {
            if(s[i]=='.')
            {
                j=i;
                break;
            }
        }
        if(j==y-1)
       {
           x+='0';
           x+='0';
           x+='.';
       }
       else if(y>i+2)
       {
           x+=s[i+2];
            if(y>i+1)
       {
           x+=s[i+1];
       }else{
           x+="0";
       }
       }else{
           x+="0";
            if(y>i+1)
       {
           x+=s[i+1];
       }else{
           x+="0";
       }
       }
           int c=0,l=0;
           if(j==y-1)
           {
               c=0;
           }
           else{
            c=-1;
           }
           for(i=j;i>=0;i--)
           {
               if(s[i]=='-')
               {
                   l=1;
                   continue;
               }
               if(c==3)
               {
                   x+=",";
                   x+=s[i];
                   c=0;
               }else{
                   x+=s[i];
                   //cout<<c<<endl;
               }
               c++;
           }
           if(l==1){
                cout<<"(";
            x+="$";
           for(i=x.size()-1;i>=0;i--){
                cout<<x[i];
           }
           cout<<")"<<endl;
           }
           else{
           x+="$";
           for(i=x.size()-1;i>=0;i--){
                cout<<x[i];
           }
           cout<<endl;
           }
           //x.clear();
        s="";
    }
    return 0;
}
