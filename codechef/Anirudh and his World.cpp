#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    string x;
    string z = "abcdefghijklmnopqrstuvwxyz";
    reverse(z.begin(),z.end());
    cin>>t;
    while(t--)
    {
        cin>>x;
        j=x.size();
        for(i=0;i<j;i++)
        {
            cout<<z[x[i]-97];
        }
        cout<<endl;
    }
    return 0;
}
