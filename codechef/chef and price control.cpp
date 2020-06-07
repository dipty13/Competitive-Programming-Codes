#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<ll> a(n + 5, INT_MAX);
        ll realSum = 0, reducedSum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            realSum += a[i];
            if(a[i] > k)
                reducedSum += k;
            else
                reducedSum += a[i];
        }
        if(realSum > reducedSum)
            cout << realSum - reducedSum << endl;
        else
            cout << 0 << endl;

    }
        return 0;
    }
