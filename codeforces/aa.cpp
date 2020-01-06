#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll m, h, n, i, j, c;
    while(cin >> n)
    {
        string s;
        while(n--){
            cin >> s;
            ll sum = 0;
            for(int i = 0; i < s.size(); i++){
                sum +=(int)(s[i] - 48);
            }
            cout << sum << endl;
            if(sum %3 == 0 || sum % 6 == 0 || sum % 9 == 0){
                cout << "red\n";
            }else{
                cout << "cyan\n";
            }
        }
    }

    return 0;
}

