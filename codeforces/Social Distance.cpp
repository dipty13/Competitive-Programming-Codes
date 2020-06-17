#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
set<ll> ones;
set<ll>::iterator it;

int get_prev(ll x){
	it = ones.lower_bound(x);
	if (it == ones.begin())
		return INT_MIN;
	--it;
	return *it;
}

int get_next(ll x){
	it = ones.lower_bound(x);
	if (it == ones.end())
		return INT_MAX;
	return *it;
}

int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        string s;
        cin >> s;
        c = 0;
        ones.clear();
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                ones.insert(i);
        }

       for(int i = 0; i < n; i++){
            if (get_prev(i) < i - k && get_next(i) > i + k){
			  c++;
			  ones.insert(i);
		  }
        }
        cout << c << endl;
    }

    return 0;
}
