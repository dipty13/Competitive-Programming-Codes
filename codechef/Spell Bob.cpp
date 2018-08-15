#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,i,j;
    cin>>t;
    while(t--)
    {
        string x,y,z="";
        cin>>x>>y;
        map<char,int> m,mm;
        int b = 0,o = 0;
        z = x + y;
        //cout<<z<<endl;
        for(i = 0;i <= z.size();i++)
        {
            if(z[i]=='b')
            {
                b++;
            }else if(z[i]=='o')
            {
                o++;
            }
        }
        if(b>=2 && o>= 1)
        {
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }

    return 0;
}
