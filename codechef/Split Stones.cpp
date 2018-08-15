#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,a,b,c,i,j,x,y,p,q;
   cin>>t;
   while(t--)
   {
       cin>>a>>b>>c>>x>>y;
       long long int arr[100];
       arr[0] = a;
       arr[1] = b;
       arr[2] = c;
       sort(arr,arr+3);
       if(x>y)
       {
           if(x>arr[2])
           {
               p = x - arr[2];
           }else{
               p =0;
           }
           if(y>arr[1])
           {
               q = y - arr[1];
           }else{
               q =0;
           }
       }else{
           if(y>arr[2])
           {
               p = y - arr[2];
           }else{
               p =0;
           }
           if(x>arr[1])
           {
               q = x - arr[1];
           }else{
               q =0;
           }
       }
       if(arr[0]>=p+q)
       {
           cout<<"YES\n";
       }else{
           cout<<"NO\n";
       }
      // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
   }
    return 0;
}
