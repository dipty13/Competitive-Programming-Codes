#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    long long int d,p;
    while(cin>>n>>d)
    {
        long long int x[n+5],c=0;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        sort(x,x+n);
        c = 1;
        for(i=1;i<n;i++)
        {
            if(x[i]-x[i-1]>2*d)
            {
                c+=2;
            }else if(x[i]-x[i-1]==2*d)
            {
                c++;
            }
        }
        cout<<c+1<<endl;
    }
    return 0;
}

