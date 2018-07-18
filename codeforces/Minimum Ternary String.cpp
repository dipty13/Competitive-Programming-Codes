#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,m;
    string s;
    while(cin>>s)
    {
        c = 1;
        while(true){
                if(c==0)
                {
                    break;
                }
        for(i=1;i<s.size();i++)
        {
            if(s[i-1]=='1'&&s[i]=='0')
            {
                swap(s[i-1],s[i]);
            }else if(s[i-1]=='2'&&s[i]=='1')
            {
                swap(s[i-1],s[i]);
            }
        }
        c = 0;
        for(i=1;i<s.size();i++)
        {
            if(s[i-1]=='1'&&s[i]=='0')
            {
                c++;
            }else if(s[i-1]=='2'&&s[i]=='1')
            {
                c++;
            }
        }
        }
        cout<<s<<endl;
    }
    return 0;
}
