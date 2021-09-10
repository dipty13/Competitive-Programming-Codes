#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n, t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a == b){
            cout << 0 << " " << 0 << endl;
        }else{
             long long int x = abs(a - b), m = 0;
            if(__gcd(a, b) > 1){

                if(a < b){
                    m = x - a;
                }
                cout << x << " " << m << endl;
            }else{
                 cout << x << " " << 1 << endl;
            }

        }

    }
    return 0;
}
