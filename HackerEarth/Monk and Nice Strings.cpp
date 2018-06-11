#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c,n;
    string s[10005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        c = 0;
        for(j=0;j<i;j++)
        {
            if(s[j]<s[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
