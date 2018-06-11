#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    string s;
    while(cin>>n)
    {
        map<string,string> m;
        map<string,string>::iterator it;
        m["purple"] = "Power";
        m["green"] = "Time";
        m["blue"] = "Space";
        m["orange"] = "Soul";
        m["red"] = "Reality";
        m["yellow"] = "Mind";
        for(i=0;i<n;i++)
        {
            cin>>s;
            m[s] = s;
        }
        cout<<6-n<<endl;
        for(it=m.begin();it!=m.end();it++)
        {
             if(it->first!=it->second)
            {
                cout<<it->second<<endl;
            }

        }

    }
    return 0;
}
