#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll s, n, t, sum, i, j, a, b;
    cin>>t;
    while(t--)
    {
        cin >> s >> n;
        a = 0;
        if(s % 2){
            s -= 1;
            a = 1;
        }
        if(s % n == 0){
            cout << s / n + a << endl;
        }else{
            if(n <= s){
                    if((s % n) % 2 == 0){
                        a += 1;
                    }else{
                        a += (s % 2);
                    }
                cout << s / n + a << endl;
            }else{
                cout << 1 + a << endl;
            }
        }
    }
    return 0;
}
