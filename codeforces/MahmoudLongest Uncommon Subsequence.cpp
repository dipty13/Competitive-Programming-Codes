#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,c,l,k;
    string a,b;
    while(cin>>a>>b)
    {
        c = -1;
        l=a.size();
        k=b.size();
        if(a==b)
        {
            cout<<-1<<endl;
        }else{
            c = max(l,k);
            cout<<c<<endl;
        }
        a="",b="";
    }
    return 0;
}
