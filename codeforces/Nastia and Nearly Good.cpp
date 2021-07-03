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
        cin >> a >> b;
        if(b == 1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
            m = a * b;
            cout << a << " " << m << " "<< a + m << endl;
        }
    }
        return 0;
}
