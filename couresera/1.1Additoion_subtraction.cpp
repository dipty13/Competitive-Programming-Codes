#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
void solve()
{
    int x, y, z;
    int a[10000 + 5];
    cin >> x >> y >> z;
    a[0] = 0;
    if(z == 0){
        cout << 0 << endl;
        return;
    }
    for(int i = 1;i <= 1000; i++){
        a[2 * i - 1] = a[2 * i - 2] + x;
        if(a[2 * i - 1] == z){
            cout << 2 *i - 1 << endl;
            return;
        }
        a[2 * i] = a[2 * i - 1] - y;
        if(a[2 * i] == z){
            cout << 2 * i << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}
int main()
{
    solve();
    return 0;
}

