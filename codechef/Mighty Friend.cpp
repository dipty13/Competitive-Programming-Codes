#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        c=0;
        long long int p=0,q=0;
        for(i=1;i<n;i+=2)
        {
            if(a[i-1]>a[i]&&c<k)
            {
                q+=a[i-1];
                p+=a[i];
                c++;
            }else if(a[i-1]<=a[i]&&c<k)
            {
                q+=a[i];
                p+=a[i-1];

            }else{
                q+=a[i];
                p+=a[i-1];
            }
        }
        if(q>p)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}
