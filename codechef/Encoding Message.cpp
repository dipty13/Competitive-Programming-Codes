#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n,i,j,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        if(n%2)
        {
            for(i=1;i<n-1;i+=2)
            {
                swap(s[i],s[i-1]);
            }
        }else{
            for(i=1;i<n;i+=2)
            {
                swap(s[i],s[i-1]);
            }
        }
        for(i=0;i<n;i++)
        {
            s[i] = 'a' + ('z' - s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
