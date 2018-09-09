/**
    by Shaila Nasrin Dipty
    Date: 2/9/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum,i,j,a,b;
    //while(cin>>n>>k)
    //{
       cin>>n>>k;
        string s;
        int c = n,o = 0;
        map<int,int> m;
        for(i = 0;i < k;i++)
        {
            cin>>s;
            if(s == "CLICK")
            {
                cin>>a;
                if(m[a])
                {
                    m[a] = NULL;
                    o--;
                }else{
                    m[a] = 1;
                    o++;
                }
                c--;

            }else{
                c = n;
                o = 0;
                m.clear();

            }
            cout<<o<<endl;
        }
   // }
    return 0;
}
