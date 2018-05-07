#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,x,y;
    while(cin>>n>>k)
    {
        long long int a[n+5];
        memset(a,-1,sizeof(a));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            //s.insert(a[i]);
        }
  sort(a,a+n);
//         for(i=0;i<n;i++)
//        {
//            cout<<a[i]<<" ";
//            //s.insert(a[i]);
//        }
       // cout<<endl<<a[k-1]<<" "<<a[k-2]<<endl;
       if(k==0&&a[0]==1)
       {
           cout<<-1<<endl;
       }
       else if(k==0&&a[0]>1)
       {
           cout<<1<<endl;
       }
       else if(a[k]!=-1&&a[k]!=a[k-1])
        {
            cout<<a[k-1]<<endl;;
        }else if(a[k]==-1)
        {
            cout<<a[k-1]<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
