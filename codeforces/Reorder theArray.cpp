#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,i,j,c,f,m;
    while(cin>>n)
    {
        int a[n+5];
        map<int,int> b;
        c = 0,m = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            b[a[i]]++;
            m = max(m,b[a[i]]);
        }
        cout<<n-m<<endl;


    }
    return 0;
}

