#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
pair<ll,ll> solve(ll l1, ll r1, ll l2, ll r2)
{
    if(l1 != l2)
    {
        return {l1,l2};
    }
    else
    {
        return {l1,l2 + 1};
    }
}
int main()
{
    ll n, m, i, j, k;
    while(cin >> n >> k)
    {
        vector<ll> a(k + 5);
        map<ll,ll> p;
         ll x = n, y = 0, tempH = INFINITY, h = 0, c = 0, tempCnt = 0;
        for(i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for(i = 0; i < k; i++)
        {
            if( n % a[i] <= tempH){
                tempH = n % a[i];
                tempCnt = n / a[i];
                c = i +1;
            }

        }
        //if(l){
        cout << c << " " << tempCnt<< endl;
        //}
    }

    return 0;
}

