#include<bits/stdc++.h>
using namespace std;
        //vector<pair<char,long long int> > f(1005);
int main()
{
    int n,i,j,c,mn,x,y,w;
    string s,t;
    while(cin>>s>>t)
    {
        y = 0,w = 0;
        c = s.size();
        map<char,int> m1,m2;
        set<char> s1;
        set<char>::iterator it;
        long long int m = 0;
        //memset(f,-1,sizeof(f));
        for(i=0;i<s.size();i++)
        {
           m1[s[i]]++;
         // s1.insert(s[i]);
        }
        for(i=0;i<t.size();i++)
        {
           if(m1[t[i]]>0)
           {
               y++;
               m1[t[i]]--;

           }else if((t[i]>='a'&&t[i]<='z')||(t[i]>='A'&&t[i]<='Z'))
           {
               w++;
           }

        }
//        for(i=0;i<t.size();i++)
//        {
//           if(m1[t[i]]>0)
//           {
//               w++;
//           }
//
//        }

        cout<<y<<" "<<w<<endl;

    }
    return 0;
}
