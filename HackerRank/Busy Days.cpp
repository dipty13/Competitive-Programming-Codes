#include <bits/stdc++.h>
using namespace std;

int main()
{

   int n,t,i,j;
   cin>>t;
   while(t--)
   {
       cin>>n;
       string s1[n+5],s2[n+5];
       map<string,int> m;
       map<string,int>::iterator it;
       string p ="";
       for(i=0;i<n;i++)
       {
           cin>>s1[i]>>s2[i];
       }

       for(i=0;i<n;i++)
       {
           int y1,y2,m1,m2,d1,d2 ;
           stringstream ss1(s1[i].substr(0,4));
           ss1>>y1;
           stringstream ss11(s2[i].substr(0,4));
           ss11>>y2;
           stringstream ss2(s1[i].substr(6,8));
           ss2>>m1;
           stringstream ss22(s2[i].substr(6,8));
           ss22>>m2;
           stringstream ss3(s1[i].substr(10,12));
           ss3>>d1;
           stringstream ss33(s2[i].substr(10,12));
           ss33>>d2;
           if(y1)

       }
   }

    return 0;
}
