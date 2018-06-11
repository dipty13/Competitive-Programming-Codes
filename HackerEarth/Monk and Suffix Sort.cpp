#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,k;
    string s;
    cin>>s>>k;
    vector<string> v;
    for(i=0;i<s.size();i++)
    {
        v.push_back(s.substr(i));
    }
    sort(v.begin(),v.end());
    cout<<v[k-1]<<endl;

    return 0;
}

