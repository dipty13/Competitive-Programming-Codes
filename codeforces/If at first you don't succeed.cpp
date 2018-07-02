#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a,b,x,c;
    while(cin>>a>>b>>c>>n)
    {
        x = n-((a+b)-c);
        if(x<=0||a<c||b<c)
        {
            cout<<-1<<endl;
        }else{
            cout<<x<<endl;
        }
    }

    return 0;
}
