#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,y,c;
    string s;
    while(cin>>n>>s)
    {
        x=0,y=0,c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                x++;
            }else{
                y++;
            }
            if(x==y&&i+1<n&&s[i]==s[i+1])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
