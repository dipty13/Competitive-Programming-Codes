#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll q, type, a, score;
    cin >> q;
    map<string, ll> m;
    while(q--){
        string s;
        cin >> type;
        switch(type){
            case 1:
                cin >> s >> score;
                m[s] += score;
                break;
            case 2:
              cin >> s;
              m[s] = 0;
              break;
            case 3:
              cin >> s;
              cout << m[s] << endl;
              break;
        }
    }
    return 0;
}
