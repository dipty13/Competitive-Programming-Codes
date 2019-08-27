#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, p, f, t;
    cin >> t;
    while(t--)
    {
        cin >> b >> p >> f;
        int c, h;
        cin >> c >> h;
        if(b == 1){
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        while(b > 0){
            if(c >= h && p > 0&& b >= 2){
                ans += c;
                p--;
                b -= 2;
            }else if(h >= c && f > 0&& b >= 2){
                ans += h;
                f--;
                b -= 2;
            }else if(p <= 0 && f > 0&& b >= 2){
                 ans += h;
                f--;
                b -= 2;
            }else if(f <= 0 && p > 0 && b >= 2){
                 ans += c;
                p--;
                b -= 2;
            }else{
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
