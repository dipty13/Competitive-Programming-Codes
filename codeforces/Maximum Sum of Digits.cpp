#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, i ,j, x, y, ans;
    while(cin>>n)
    {
        if( n < 10)
        {
            cout<<n<<endl;
            continue;
        }else if(n < 20)
        {
            x = n / 2;
            y = n - x;

        }else{
           x = n / 2;
           x = x - (x%10 + 1);
           y = n - x;
        }
       stringstream ss;
       string xs;
       ss<<x;
       ss>>xs;
       stringstream ss2;
       string ys;
       ss2<<y;
       ss2>>ys;

       xs += ys;
       ans = 0;
       for(i = 0;i < xs.size(); i++)
       {
           ans += int(xs[i] - 48);
       }
       stringstream sn;
       sn<<n;
       string base;
       sn>>base;
       ll baseAns = 0;
       for( i = 0 ;i < base.size() ;i++)
       {
            baseAns += int(base[i] - 48);
       }
       if(baseAns > ans){
       cout<<baseAns<<endl;
       }else{
           cout<<ans<<endl;
       }

    }
    return 0;
}
