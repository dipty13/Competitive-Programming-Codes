#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,t,i,j,c,x;

    cin>>n>>k;
    int a[n+5],b[n+5];
    memset(b,0,sizeof(b));
    j=0,c=0,x=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    j=0;
     for(i=0; i<n; i++)
    {
        if(x!=1&&i!=0)
        {
            b[j] = a[i] - a[i-1];
            //cout<<a[i]<<" "<<a[i-1]<<" "<<b[j]<<endl;
            x=1;
            j++;
        }else{
            x=0;
        }

    }
    for(i=0;i<j;i++)
    {
        if(b[i]!=k)
        {
            //cout<<b[i]<<endl;
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
