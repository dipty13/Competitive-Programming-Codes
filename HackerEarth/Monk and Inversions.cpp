#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c,v=0;
    string s,x;
    cin>>s;
    j = 0;

    int m = 0;
    c = 0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
            m = max(m,c);

        }else{
            c = 0;
        }


    }

    cout<<m<<endl;
    return 0;
}
