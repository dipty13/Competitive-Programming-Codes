#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
// #include <algorithm>
// #include <bitset>
// #include <regex>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    string binary = bitset<32>(N).to_string();
   // cout << binary << endl;
    //cout <<  regex_search(binary, regex("(?=1)(0+)(?=1)") ) << endl;
    int b = 0, sz = binary.size(), cnt = 0, mx = 0;
    for(int i = 0; i < sz; i++){
          //  cout <<b << " " <<  binary[i] << endl;
        if(b == 1 && binary[i] == '0'){
            cnt++;
        }else if(b == 1 && cnt > 0 && binary[i] == '1'){
            mx = max(mx, cnt);
            cnt = 0;
            b = 1;
        }else if(b == 0  && binary[i] == '1'){
            b = 1;
        }
       // cout << cnt << endl;
    }
    return mx;
}
int main()
{
        cout << "pp " << solution(1041) << endl;
        return 0;
}
