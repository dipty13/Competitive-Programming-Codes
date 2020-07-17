#include <bits/stdc++.h>
using namespace std;
int sockMerchant(int n, vector<int> v) {
    map<int,int> m;
    map<int,int>::iterator it;
    for(int i = 0; i < n; i++){
        m[v[i]]++;
    }
    int c = 0;
    for(it = m.begin(); it != m.end(); it++){
        c += (it->second / 2);
    }
    return c;
}
int main()
{

   int n,a[101],i,j,c=0,d=0,x=0;
   scanf("%d",&n);
   vector<int> v(n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&v[i]);
   }
   cout << sockMerchant(n, v) << endl;
    return 0;
}
