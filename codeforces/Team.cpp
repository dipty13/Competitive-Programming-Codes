#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,m,x;
    while(cin>>n>>m)
    {
        x = m/3;
       // cout<<x<<endl;
        if(n <= x)
        {
            cout<<-1<<endl;
            continue;
        }
        string s = "";
        c = 0;
        int z = n,o = m, f = 0;
        for(i = 0 ;i < n+m;i++)
        {
            if( z <=0 || o <=0)
            {
                f = 1;
                break;
            }
            if(c < 2)
            {
                s += '1';
                c++;
                o--;
            }else{
                s += '0';
                c = 0;
                z--;
            }
           // cout<<s<<endl;
        }
       /* if(f){
            cout<<-1<<endl;
        }else{*/
            cout<<s<<endl;
       // }

    }
    return 0;
}
