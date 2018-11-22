#include<bits/stdc++.h>
using namespace std;
#define M 2000009

int main()
{
    long long int n, i, sum, mx;
   while(cin >> n)
   {
       long long int a[n + 5];
       for(i = 0; i < n; i++)
       {
           cin >> a[i];
       }
       sort(a, a + n);
       sum = 0, mx = 0;
       for(i = n - 1; i >= 0; i--)
       {
           sum += a[i];
       }
       if(sum % 2)
       {
           for(i = 0; i < n; i++)
         {
           if(a[i] % 2)
           {
               sum -= a[i];
               break;
           }
         }
       }
       cout << sum << endl;

   }
    return 0;
}
