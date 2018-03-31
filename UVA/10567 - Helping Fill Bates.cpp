#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,q;
    string s,a;
    cin>>s;
    int x = s.size();
   vector< vector<int> > v(300);
    for(i=0;i<x;i++)
    {
        v[s[i]].push_back(i);
    }
    cin>>q;
    while(q--)
    {
        cin>>a;
        x = a.size();
        int found = 1,index = -1,first=-1,last=-1;
        //vector<vector<int> >::iterator ans;
        for(i=0;i<x;i++)
        {
            char c = a[i];
            vector< int>::iterator it = lower_bound(v[c].begin(),v[c].end(),index+1);
            //cout<<*it<<" ";
            if(it==v[c].end())
            {
                found =0;
                break;
            }
            index = *it;
            if(first==-1)
            {
                first = index;
            }
            last = index;
        }
        //cout<<endl;
        if(found==1)
        {
            cout<<"Matched "<<first<<" "<<last<<endl;
        }
        else{
            cout<<"Not matched\n";
        }
    }
    return 0;
}
