#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll sum_of_digits(ll n){
    ll ans = 0;
    while(n > 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int main()
{
    ll n,t,sum,i,j, c, a, b, x, y;
    cin>>t;
    while(t--)
    {
        cin>> n;
        vector<ll> v(n), p(n);
        for(i = 0; i < n; i++)
        {
           cin >> v[i] >> p[i];
        }
        ll chef_total = 0, morty_total = 0, chef = 0, morty = 0;;
        for(i = 0; i < n; i++)
        {
           x = sum_of_digits(v[i]);
           y = sum_of_digits(p[i]);
           if(x > y){
                chef++;
           }else if(x < y){
               morty++;
            }else{
                chef++;
                morty++;
            }
        }
        if(chef > morty){
            cout << 0 << " " << chef << endl;
        }else if(chef < morty){
            cout << 1 << " " << morty << endl;
        }else{
            cout << 2 << " " << chef << endl;
        }
    }
    return 0;
}
