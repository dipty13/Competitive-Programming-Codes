#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
vector<vector<ll> > connection(1005, vector<ll>(1005));
vector<bool> visited(1005);
stack<ll> ans;
bool isLuckyTicket(ll n, string s)
{
    ll i = 0, j = n - 1, sum1 = 0, sum2 = 0, f = 0;
    while(i <j){
           // cout << i << " " << j << endl;
        if((s[i] == '4' || s[i] == '7') && (s[j] == '4' || s[j] == '7')){
            sum1 +=(int) (s[i] - 48);
            sum2 += (int)(s[j] - 48);
           // cout << sum1 << " " << sum2 << endl;
        }else{
            f = 1;
            break;
        }
        i++;
        j--;
    }
    if(sum1 != sum2){
                f = 1;

                }
    if(f)
        return false;
    //cout << f << endl;
    return true;
}
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout.tie(0);
    ll n,i, j,  k, t;
    //cin >> t;
    while(cin >> n)
    {
        string s;
        //cin.ignore();
        cin >> s;
        int f = isLuckyTicket(n, s);
        //cout << f << endl;
        if(f == 1)
            cout << "YES"<< endl;
        else{
               // cout << "pp" << endl;
            cout << "NO" << endl;
        }
    }

    return 0;
}

