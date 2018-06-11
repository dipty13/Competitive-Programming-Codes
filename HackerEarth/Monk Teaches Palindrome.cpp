#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x;
    string s,p;
    cin>>n;
    while(n--)
    {
        cin>>s;
        p = s;
        reverse(p.begin(),p.end());
        x = p.size();
        if(p!=s)
        {
            cout<<"NO\n";
        }else{
            if(x%2)
            {
                cout<<"YES ODD\n";
            }else{
                cout<<"YES EVEN\n";
            }
        }
    }
    return 0;
}
