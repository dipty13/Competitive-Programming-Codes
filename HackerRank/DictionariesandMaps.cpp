#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    map<string,string> m;
    map<string,string>::iterator it;
    string s1,s2,q;
    cin>>n;
    j=n;
    while(n--)
    {
        cin>>s1>>s2;
        m[s1] = s2;
    }
    while(cin>>q)
    {
        //cin>>q;
        it =m.find(q);
        if(it!=m.end())
        {
            cout<<q<<"="<<m[q]<<endl;
        }else{
            cout<<"Not found\n";
        }
    }
    return 0;
}
