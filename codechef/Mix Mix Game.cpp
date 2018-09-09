/**
    by Shaila Nasrin Dipty
    Date: 25/8/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,x,k,z1,z2;
    cin>>t;
    while(t--)
    {
        cin>>n>>z1>>z2;
        long long int a[n+5],v[n+5],m[n+5];
        x = 0;
        j =0;
        k = 0;
        for(i =0 ; i< n; i++)
        {
            cin>>a[i];
            if(i%2==0)
            {
                v[j] = a[i];
                j++;
            }
            else
            {
                m[k] = a[i];
                k++;
            }
        }
        sort(v,v+j);
        sort(m,m+k);
        int vx = 0,mx = 0;
        for(i = 0; i<j; i++)
        {
            if(x+v[i]==z1||x+v[i]==z2||x-v[i] ==z1||x-v[i]==z2)
            {
                vx = 1;
                break;
            }else{
                x+=v[i];
            }
        }
        if(vx == 1)
        {
            cout<<1<<endl;
            continue;
        }
        for(i = 0; i<k; i++)
        {
            //cout<<x+m[i]<<" "<<x-m[i]<<endl;
            if(x+m[i]==z1||x+m[i]==z2||x-m[i] ==z1||x-m[i]==z2)
            {
                mx = 1;
                break;
            }else{
                x+=m[i];
            }
        }
        if(mx == 1)
        {
            cout<<2<<endl;

        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}
