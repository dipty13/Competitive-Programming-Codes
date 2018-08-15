#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,n,i,j,k,m;
    while(cin>>n>>m)
    {
        int a[n+5],l[n+5],r[n+5];
        long long int sum =0;
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
            a[i] = l[i] - r[i];
            sum+=l[i];
        }
        sort(a,a+n);
        if(sum<=m)
        {
            cout<<0<<endl;
            continue;
        }
        j =0;
        int c =0, cnt = 0;
        for(i=n-1;i>=0;i--)
        {

            if(sum-a[i]<=m)
            {
                sum-=a[i];
                cnt++;
                c = 1;
                break;
            }else{
                sum-=a[i];
                cnt++;
            }
        }
        if(sum<=m)
        {
            cout<<cnt<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}

