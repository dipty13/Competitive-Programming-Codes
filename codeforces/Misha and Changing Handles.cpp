#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,n;
    while(cin>>n)
    {
            string a,b;
    map<string,string> s1,s2;
    map<string,string>::iterator it;

        while(n--)
        {
            cin>>a>>b;
            it = s2.find(a);
            if(it==s2.end())
            {
                s1[a] = b;
                s2[b] = a;

            }else{

                s2[b] = it->second;
                s1[it->second] = b;
            }
        }

        cout<<s1.size()<<endl;
        for(it=s1.begin();it!=s1.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
    return 0;
}
