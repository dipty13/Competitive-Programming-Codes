#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;
long long int a[MAX];

int main()
{
    int t,i,n,c,q,l=0,u=0,x=0,y=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    while(q--)
    {
        cin>>l>>u;
         x = lower_bound(a,a+n,u)-a;
         y = upper_bound(a,a+n,u)-a;
        if(l==0){
            cout<<n-x<<endl;
        }else{
        cout<<n-y<<endl;
        }
    }
    return 0;
}
