#include<bits/stdc++.h>
using namespace std;
string  numToString(int n)
{
    stringstream ss;
    ss<<n;
    return ss.str();
}
int main()
{
     int n,i,j,c,x;
    while(cin>>n)
    {
        j=0,i=1;
        string s,p;
       while(j<=1000)
       {
           p = numToString(i);
           s+=p;
           j += p.size();
           i++;
       }
       cout<<s[n-1]<<endl;
    }
    return 0;
}
