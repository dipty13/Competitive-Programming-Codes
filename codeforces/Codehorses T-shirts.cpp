#include<bits/stdc++.h>
using namespace std;
#define M 2000009
int main()
{
    int n,c,l,r,i,j=0;
   while(cin>>n){
    string a[n+5],b[n+5];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       // sort(a[i].begin(),a[i].end());
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
       // sort(b[i].begin(),b[i].end());
    }
//    sort(a,a+n);
//    sort(b,b+n);
    map<string,int> m1,m2;
    c  =0;
    for(i=0;i<n;i++)
    {
       // cout<<a[i]<<" "<<b[i]<<endl
                //cout<<a[i]<<" "<<b[i]<<endl;
       for(j=0;j<n;j++)
       {
           if(b[j]!=""&&a[i]!="")
           {
               if(a[i]==b[j]){
               c++;
               b[j]="";
               a[i]="";
               }
           }
       }

    }
//    c=0;
//    for(i=0;i<n;i++)
//    {
//       if(m1[b[i]]!=m2[b[i]])
//       {
//
//           c++;
//       }
//    }

    cout<<n-c<<endl;


   }

    return 0;
}
