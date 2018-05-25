#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,m,n,x,cs=0,a[100005];
    while(cin>>n)
    {
        for(i =0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
//        if(n%2==0)
//        {
//            cout<<0<<endl;
//            continue;
//        }
        int x;
        if(n%2){
            x = n/2;
        }else{
            x = n/2-1;
        }

        cout<<a[x]<<endl;
    }
    return 0;
}
