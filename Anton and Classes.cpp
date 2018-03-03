#include<bits/stdc++.h>
using namespace std;
 int l1[2000005],r1[2000005],l2[2000005],r2[2000005];
int main()
{
    int n,i,j,m;
    while(cin>>n)
    {

        for(i=0;i<n;i++)
        {
            cin>>l1[i]>>r1[i];
        }
        sort(l1,l1+n);
        sort(r1,r1+n);
        cin>>m;
         for(i=0;i<m;i++)
        {
            cin>>l2[i]>>r2[i];
        }
         sort(l2,l2+m);
        sort(r2,r2+m);
        long long int mx=INT_MIN;
        mx= max(max(l2[m-1]-r1[0],l1[n-1]-r2[0]),0);
        cout<<mx<<endl;

    }
    return 0;
}
