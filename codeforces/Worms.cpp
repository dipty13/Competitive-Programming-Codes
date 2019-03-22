#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  i,a, b, c, d, x, y;
    while(cin >> a >> b >> c >> d)
    {
        map<char, long long int> m;
        string s = "";
        if(a == 0 && b == 0 && c == 0 && d == 0){
            cout << 1 << endl;
            continue;
        }else if(a == 0 && d == 0 && c == 0){
            cout << 1 << endl;
            continue;
        }else if(a == 0 && d == 0){
            cout << 0 << endl;
            continue;
        }
       x = 2 * a + b + c;
       y = 2 * d + b + c;
       if(x == y){
        cout << 1 << endl;
       }else{
           cout << 0 << endl;
       }

    }

    return 0;
}
