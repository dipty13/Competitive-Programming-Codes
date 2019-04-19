#include<bits/stdc++.h>
using namespace std;
long long int dp[100005];
long long int a, b, c, d, e, f;
long long int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n] != -1) return dp[n];
    dp[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
    return dp[n];
}
int main() {
    long long int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        memset(dp, -1, sizeof(dp));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
