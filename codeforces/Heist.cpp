#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n,i,j,k,c;
       cin>>n;
      int a[n+5];
      for(i = 0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      c = (a[n-1]-a[0])+1;
      cout<<abs(n-c)<<endl;

    return 0;
}
