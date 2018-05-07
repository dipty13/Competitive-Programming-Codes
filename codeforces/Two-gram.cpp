#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,x,y;
    string s;
    while(cin>>n>>s)
    {
        map<string,int> m;
        map<string,int>::iterator it;
        string k="",p="";
        for(i=0;i<n-1;i++)
        {
            p=s[i];
            p+=s[i+1];
           // cout<<p<<endl;
            m[p]++;
        }
        //cout<<m["AB"]<<endl;
        int z=-1;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>z){
                k = it->first;
                z=it->second;
            }

        }
        cout<<k<<endl;
    }
    return 0;
}
