#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,k,n,j,c;
    while(cin>>n>>k)
    {
        cin>>s;
        int m[26];
        //set<char> st;
        memset(m,0,sizeof(m));
        for(i=0;i<n;i++)
        {
            m[s[i]-65]++;
            //st.insert(s[i]);
        }
       long long int x=0;
        sort(m,m+26);
       for(i=25;i>=0;i--)
       {
           long long int y = min(k,m[i]);
           x+=(y*y);
           k-=y;
       }
       cout<<x<<endl;

     }
    return 0;
}
