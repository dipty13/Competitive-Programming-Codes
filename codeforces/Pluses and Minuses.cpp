#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    cin >> t;
    while(t--){
        string s;
        cin.ignore();
        cin >> s;
        ll add = 0, deduct = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+'){
                deduct++;
            }else{
                add += 3;
            }
        }
        cout << add - deduct << endl;
    }
    return 0;
}
