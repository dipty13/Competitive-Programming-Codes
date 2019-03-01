#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, c, k, mx, i, j;
    while(cin >> n )
    {
       ll a[n * 2 + 5];
       mx = 0;
       n = n * 2;
       map<ll, ll> m;
       for(i = 1; i <= n; i++)
       {
           cin >> a[i];
           mx = max(a[i], mx);

       }

           ll c = 1, cnt = 0, x = 0;
           for(j = 1; ; j++)
           {
                if(c > mx)
               {
                   break;
               }
               ll p = 0, q;
               for(i = 1; i <= j ; i++){
               if(a[i] == c && m[i] != 1)
               {
                if(c == 1)
                {
                    x = i;
                    cnt += x - 1;
                }else{
                    cnt += abs(x - i);
                    x = i;
                }


                   // cout <<abs(x - i) << " " <<a[i] << "  " << c << endl;
                   c++;
                   p = 1;
                   j = i;
                   m[i] = 1;
                   break;
               }
               }
               if(p == 0){
               for(i = j + 1; i <= n ; i++){
               if(a[i] == c && m[i] != 1)
               {

                      if(c == 1)
                {
                    x = i;
                    cnt += x  - 1;
                }else{
                    cnt += abs(x - i);
                    x = i;
                }

                    //cout << abs(x - i) <<" " <<a[i] << "  " << c << endl;
                   c++;
                   j = i;
                   m[i] = 1;
                   break;
               }
               }
               }
           }
          // cout << endl;
           c = 1, x = 0;
          for(j = 1; ; j++)
           {
               if(c > mx)
               {
                   break;
               }
               ll p = 0;
               for(i = 1; i <= j ; i++){
               if(a[i] == c && m[i] != 1)
               {

                  if(c == 1)
                {
                    x = i;
                    cnt += x - 1;
                }else{
                    cnt += abs(x - i);
                    x = i;
                }
                  // cout << abs(x - i) <<" "<<a[i] << " " << c << endl;;
                   c++;
                   p = 1;
                   j = i;
                   break;
               }
               }
               if(p == 0){
               for(i = j + 1; i <= n ; i++){
               if(a[i] == c && m[i] != 1)
               {

                    if(c == 1)
                {
                    x = i;
                    cnt += x - 1;
                }else{
                    cnt += abs(x - i);
                    x = i;
                }

                   //cout <<abs(x - i)<< " "<< a[i] << " " << c<< endl;
                   c++;
                   j = i;
                   break;
               }
               }
               }
           }
       cout <<  cnt << endl;

    }
    return 0;
}
