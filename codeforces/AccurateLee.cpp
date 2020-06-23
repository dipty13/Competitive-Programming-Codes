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
        cin >> n;
        string s, ans = "";
        cin.ignore();
        cin >> s;
        ans += s[n - 1];
        int j = 0;
        for(int i = n - 2; i >= 0; i--){
            if(s[i] <= ans[j]){
                ans += s[i];
                j++;
            }
        }
        reverse(ans.begin(), ans.end());
        if(ans[ans.size() -1] == '0'){
            cout << "0\n";
            continue;
        }
        cout << ans << endl;
    }
    return 0;
}
