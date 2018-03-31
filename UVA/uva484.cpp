#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> v;
    map<long long int,long long int> m;
    map<long long int,long long int> n;
    long long int a,i;
    while(cin>>a)
    {
        if(m[a]==NULL)
        {

            //n[a]=1;
            v.push_back(a);
            m[a]++;
        }
        else{
            m[a]++;
        }
    }
    for(i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "<<m[v[i]]<<endl;
    }
}
