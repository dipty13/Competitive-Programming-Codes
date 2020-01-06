#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll q, n,i, j;
    cin >> q;
    while(q--){
       cin >> n;
       ll v[n + 5];
       for(i = 0; i < n; i++){
        cin >> v[i];
       }
       sort(v, v + n);
       ll c = 1, d = 1;
       for(i = 1; i < n; i++){
            if(v[i] - v[i - 1] > 1){
                c++;
            }
       }
       if(c == n){
        cout << 1 << endl;
       }else{
           cout << 2<< endl;
       }
    }

    return 0;
}

