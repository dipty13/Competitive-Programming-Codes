#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,t,l,r,i,j=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        j = n - 1;
        int c = 0;
        for(i = 0 ;i < n/2, j>=n/2 ;i++)
        {
            //cout<<i<<" "<<j<<" \n";
            //cout<<s[i]<<" "<<s[j]<<" "<<(char)(s[i]+ 1 )<<" "<<s[j]<<" "<<(char)(s[i] - 1) <<" "<<s[j]<<endl;
            if(s[i] == s[j]
               ||(char)(s[j]+ 1 )==(char)(s[i] - 1)||(char)(s[j] - 1) ==(char)(s[i]+ 1 )
               ||(char)(s[i]+ 1 )==(char)(s[j]+ 1 )||(char)(s[i] - 1) ==(char)(s[j] - 1))
            {
                //cout<<"here\n";
                //continue;
            }else{
                c = 1;
                break;
            }
            j--;
        }
        if(c)
        {
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}
