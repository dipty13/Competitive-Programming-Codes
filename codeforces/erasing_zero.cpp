#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int getNumberOfErasedZeros(string s)
{
    int z = 0, o = 0, cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
          o = 1;
          cnt += z;
          z = 0;
        }else if(o == 1 && s[i] == '0')
            z++;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i, j, k, t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << getNumberOfErasedZeros(s) << endl;
    }

    return 0;
}

