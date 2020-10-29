#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        a = 6, b = 10, c = 14;
        ll sum = a + b + c;
        if(n <= sum){
            cout << "NO\n";
            continue;
        }
        ll dif = n- sum;
        if(dif == 6 || dif == 10 || dif == 14)
            c = 15;
        sum = a + b + c;
        cout << "YES\n" << a << " " << b << " " << c << " " << n - sum << endl;
    }
    return 0;
}
