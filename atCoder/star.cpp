#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = n % 100;
    int y = n - x + 100;
    cout << y - n << endl;
    return 0;
}
