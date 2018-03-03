#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c=0,d=0,f=0,b=0,l[105],g[105];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>l[i];
        }
        f=0,b =0;
        for(i=0;i<n;i++)
        {
            cin>>g[i];
        }
        for(i=0; i<n; i++)
        {
            if(l[i]<=g[i])
            {
                f++;
            }
        }
        j=0;
        for(i=n-1; i>=0; i--)
        {
            if(l[j]<=g[i])
            {
                b++;
            }
            j++;
        }
      //  cout<<f<<" "<<b<<endl;
        if(f==n&&b==n)
        {
            cout<<"both\n";
        }
        else if(f==n)
        {
            cout<<"front\n";
        }
        else if(b==n)
        {
            cout<<"back\n";
        }
        else{
            cout<<"none\n";
        }
    }
    return 0;
}
