#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m,  c, i;
    while(cin >> n)
    {
        ll b[n + 5],a[n + 5];
        m = 0;
        for(i = 0; i < n; i++){
            cin >> b[i];
            if(i == 0){
                m = 0;
            }else{
              m = max(m, a[i - 1]);
            }
            a[i] = b[i] + m;
        }
        for(i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
