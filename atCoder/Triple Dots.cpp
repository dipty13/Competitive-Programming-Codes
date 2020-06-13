#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int k;
    string s;
    cin >> k;
    cin >> s;
    if(s.size() <= k){
        cout << s <<endl;
    }else{
        cout << s.substr(0, k) + "..." << endl;
    }

    return 0;
}
