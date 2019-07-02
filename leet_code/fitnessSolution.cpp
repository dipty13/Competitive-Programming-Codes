#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(int x, int turn){
    ll n = 360 / (180 - (180 - turn));
    return n * x;
}
int main(){
    int x, turn, n, c = 0;
    cin >> x >> turn;
    ll ans = solve(x, turn);
    cout << ans << endl;
    return 0;
}

