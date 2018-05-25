#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0,x=0,r=0;
    string s="";
    cin>>n;
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        s+=(r+48);
        //cout<<s<<endl;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            d++;
        }
        else{
            c=0;
            d=0;

        }
        if(x<=d){
            x=d;
        }

        //cout<<x<<endl;
    }
    cout<<x<<endl;
    return 0;
}
