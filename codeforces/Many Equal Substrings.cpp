#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,k;
    while(cin>>n>>k)
    {

        string s;
        cin>>s;
        for(i = n - 1;i > 0 ;i--)
        {
            //cout<<n-i<<" "<<s.substr(n -i)<<" "<<s.substr(0,i)<<endl;
            if(s.substr(n - i) == s.substr(0,i))
            {
                cout<<s;
                while(--k)
                {
                    cout<<s.substr(i);
                    //k--;
                }
               break;
            }
        }

        while(k>0)
        {
            cout<<s;
            k--;
        }
        cout<<endl;
    }
    return 0;
}
