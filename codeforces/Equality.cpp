#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,c;
    while(cin>>n>>k)
    {
        string s,x="";
        cin>>s;
        c = 0;
        map<char,int> m;
        char cr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        for(i = 0;i<n;i++)
        {
            m[s[i]]++;

        }
        map<char,int>::iterator it;
        int f = 0;
        for(i = 0 ;i<k;i++)
        {
            it = m.find(cr[i]);
            if(it!=m.end())
            {

            }else{
                f = 1;
            }
        }
        if(f==1)
        {
            cout<<0<<endl;
            continue;
        }
        int mn = INT_MAX;
        for(it =m.begin();it!=m.end();it++)
        {
            mn = min(mn,it->second);
        }
        cout<<k*mn<<endl;
    }
    return 0;
}
