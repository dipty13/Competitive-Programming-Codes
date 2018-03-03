#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[20005],i,j,m;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>p[i];

        }
        string s[105];
        getchar();
        for(i=0;i<n;i++)
        {
            getline(cin,s[i]);
            //getchar();
        }

        int c=0,x=0;
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<s[i].size();j++)
            {
                if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u'||s[i][j]=='y')
                {
                    //cout<<s[i][j]<<" ";
                    c++;
                }
            }
            //cout<<endl<<c<<endl;
            if(c==p[i])
            {
                x=1;
            }
            else{
                x=0;
                break;
            }
        }
        if(x)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}
