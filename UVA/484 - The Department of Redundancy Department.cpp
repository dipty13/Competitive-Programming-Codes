#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> v;

    map<long long int,long long int> m;
     map<long long int,long long int> n;
    long long int i=0,x,p;
    while (cin >> x)
    {
        if(n[x]!=1)
        {
            n[x]=1;
            v.push_back(x);
            m[x]++;

        }else{
            m[x]++;
        }

    }
     p=v.size();
     for(i=0;i<p;i++)
     {
         cout<<v[i]<<" "<<m[v[i]]<<endl;
     }
    return 0;
}
