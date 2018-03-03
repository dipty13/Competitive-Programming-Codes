#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,n,r=0,b=0,y=0,g=0;
    while(cin>>s)
   {
        r=0,b=0,y=0,g=0;
        map<int,char> m;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='!')
            {
                m[i%4]=s[i];
            }

        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='!')
            {
                if(m[i%4]=='R')
                {
                    r++;
                }
                else if(m[i%4]=='B')
                {
                    b++;
                }
                else if(m[i%4]=='Y')
                {
                    y++;
                }
                else if(m[i%4]=='G')
                {
                    g++;
                }
            }
        }
        cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
    }
    return 0;
}
