#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s, ans = "";
        cin.ignore();
        cin >> s;
        ll zero = 0, one = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                zero++;
            }else{
                break;
            }
        }

        for(int i = n - 1; i >= 0; i--){
           if(s[i] == '1'){
                one++;
           }else{
               break;
           }
        }
        if(zero + one == n){
            cout << s <<endl;
            continue;
        }
        for(int i = 0; i < zero; i++){
            cout << "0";
        }
              cout << "0";
        for(int i = 0; i < one; i++){
            cout << "1";
        }
        cout <<endl;
    }
    return 0;
}
