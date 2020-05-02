#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
 vector<ll> v(100005);
 void values(){
     for(int i = 1; i <= 30; i++){
            v[i] = pow(2, i);
    }
 }
int main()
{
    ll n, t, k, m, x, i, j, p;
    values();
    cin >> t;
    while(t--)
    {
        cin >> n;
        map<ll,ll> mp;
        if(n == 2){
            cout << 2 << endl;
            continue;
        }
        m = 0;
       i = 1;
        j = n;
         k = 0;
        while(m < n/2){
            k += v[i] + v[j];
            m +=2;
            mp[i] = 1;
            mp[j] = 1;
            i++, j--;
            cout <<
        }
        p = 0;
        for(i = 1; i <= n; i++){
            if(mp[i] != 1){
                p += v[i];
            }
        }
        cout << abs(k - p) << endl;
    }
    return 0;
}
