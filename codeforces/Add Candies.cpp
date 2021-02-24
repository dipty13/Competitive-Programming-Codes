#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i, j, s, k, t;
    cin >> t;
    while(t--)
    {
        cin >> n ;
        cout << n - 1 << endl;
        for(i = n; i > 1; i--){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

