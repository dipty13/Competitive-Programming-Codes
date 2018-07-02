#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,s;
    while(cin>>n)
    {
        int a[n+5];
        s = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        int x = n/2,s1 = 0,s2= 0;
        int p = s/2;
        if((n==2&&a[0]==a[1])||n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<1<<endl;
        for(i=0;i<n;i++)
        {
            if(a[i]+a[i]!=s&&a[i]!=s)
            {
                cout<<i+1<<endl;
                break;
            }
        }
        //cout<<1<<endl;
        //cout<<endl;
    }
    return 0;
}
