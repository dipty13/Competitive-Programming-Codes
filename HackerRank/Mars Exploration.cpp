#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    int i,j,c=0;
    cin>>s;
    int x=s.size();
    p="SOS";
    for(i=0;i<x;i++)
    {
        if(s[i]!=p[i%3])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
