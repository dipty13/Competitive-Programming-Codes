#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c,d;
    string s,x;
    while(cin>>n)
    {
        cin>>s;
        c=0,d=0;
        x="";

        for(i=0;i<n;i++)
        {
           if(s.substr(i,2)=="RU"||s.substr(i,2)=="UR")
           {
               c++;
               i++;
           }else{
               d++;
           }
        }
        cout<<c+d<<endl;
    }
    return 0;
}
