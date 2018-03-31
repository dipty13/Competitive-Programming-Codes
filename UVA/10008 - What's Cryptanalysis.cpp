#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,t, a[26],i,sum,c=0;
    cin>>t;
    string x;
  priority_queue<pair<int,int> > m;
 for(i=0;i<26;i++)
 {
     a[i]=0;
 }
 cin.ignore();
    while(t--)
    {
        getline(cin,x);

        for(i=0;i<x.size();i++)
        {
            if(isalpha(x[i]))
           {
               a[toupper(x[i])-'A']++;
           }

        }
        //cin.ignore();

    }
    for(i=0;i<26;i++)
    {
        if(a[i]>0)
        {
            m.push(make_pair(a[i],-(i+'A')));
            //cout<<a[i]<<" "<<(char)(i+'A')<<endl;
        }
    }

    while(!m.empty())
    {
       // printf("%c %d\n",-m.top().second,m.top().first);
       cout<<(char)-m.top().second<<" "<<m.top().first<<endl;
        m.pop();
    }
    return 0;
}
