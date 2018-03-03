#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,c,x;
    while(cin>>s)
    {
        x = s.size();
        cout<<(26*(x+1))-x<<endl;
    }
    return 0;
}
