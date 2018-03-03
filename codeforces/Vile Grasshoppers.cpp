#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,p,y,c=0,x[606];
    while(cin>>p>>y)
    {
        c=0;
        if(p==y)
        {
            cout<<-1<<endl;
            c=1;
        }
        else
        {
            if(y%2==1)
            {
                cout<<y<<endl;
                c=1;
            }
        }
         if(c==0)
        {
            cout<<-1<<endl;
        }

    }
    return 0;
}
