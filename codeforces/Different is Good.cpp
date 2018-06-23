#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,l,k;
    string a,b;
    while(cin>>n>>a)
    {
        set<int> s;
        if(n>26)
        {
            cout<<-1<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        cout<<n-s.size()<<endl;
    }
    return 0;
}
