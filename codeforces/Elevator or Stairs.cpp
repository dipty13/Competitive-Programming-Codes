#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll x, y, z, t1, t2, t3;
    while(cin >> x >> y >> z >> t1 >> t2 >> t3)
    {
        ll stairTime = t1 * abs(x - y);
        ll elavetorLocationTime = abs(x - z) * t2;
        ll elevatorTime = t2 * abs(x - y) + (t3 * 2) + elavetorLocationTime + t3;
        //cout << stairTime << " " << elavetorLocationTime << " " << elevatorTime << endl;
        if(stairTime >= elevatorTime)
        {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
