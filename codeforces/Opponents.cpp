#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,f,d;
    while(cin>>n>>d)
    {

        f = 0;
        int mx = -1;
        j=d,c=0;
        while(j--)
        {
            string s;
            map<char,int> m;
            cin>>s;
            for(i=0;i<n;i++)
            {
                m[s[i]]++;
            }
            //cout<<m['1']<<endl;
            if(m['1']!=n&&f==1)
            {
                c++;
                f=1;
                mx = max(mx,c);
                //cout<<mx<<endl;
            }else if(m['1']!=n&&f==0){
                f=1;
                c++;
                mx = max(mx,c);
               // cout<<mx<<endl;

            }else{
                mx = max(mx,c);
                f=0;
                c=0;
                //cout<<mx<<endl;
            }
        }
        mx = max(mx,c);
        cout<<mx<<endl;
    }
    return 0;
}
