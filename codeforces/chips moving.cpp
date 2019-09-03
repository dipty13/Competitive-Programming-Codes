#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll m, a, b, c, h, n, i, j, t;
    while(cin >> n){
        int a[n + 5];
        int odd = 0, even = 0;
        for(i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]&1){
                odd++;
            }else{
                even++;
            }
        }
        cout << min(even, odd) << endl;
    }

    return 0;
}

