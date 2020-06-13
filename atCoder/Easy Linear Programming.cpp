#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int k, a, b, c;
    cin >> a >> b >> c >> k;
    if(k <= a){
        cout << k << endl;
    }else if(k <= a + b){
        cout << a << endl;
    }else{
        cout << a - (k - a - b) << endl;
    }
    return 0;
}
