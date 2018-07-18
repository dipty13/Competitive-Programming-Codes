#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c=0;
    cin>>t;
    while(t--)
    {
        vector<string> s(2005);
        s[0]="http://www.lightoj.com/";
        i = 0,j=0;
        string x,y;
        cout<<"Case "<<++c<<":\n";
        while(cin>>x&&x!="QUIT")
        {
            if(x=="VISIT")
            {
                cin>>y;
                cout<<y<<endl;
                s[++i] = y;
                j = i;
            }
            else if(x=="BACK")
            {
                if(i-1<0)
                {
                    cout<<"Ignored\n";
                }else{
                    cout<<s[--i]<<endl;
                }
            }
            else if(x=="FORWARD")
            {
                if(i+1>j)
                {
                    cout<<"Ignored\n";
                }else{
                    cout<<s[++i]<<endl;
                }
            }
        }
    }
    return 0;
}
