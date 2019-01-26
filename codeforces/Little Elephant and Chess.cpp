#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, h, m, i, sum, j, c;
    string  s;
    while(cin >> s)
    {
        c = 1;
        if(s != "WBWBWBWB" && s != "BWBWBWBW"){
                c = 0;
            }

        for(i = 1; i < 8; i++)
        {
            cin >> s;
            if(s != "WBWBWBWB" && s != "BWBWBWBW"){
                c = 0;
            }

        }
       if(c){
        cout << "YES\n";
       }else{
           cout << "NO\n";
       }

    }
    return 0;
}
