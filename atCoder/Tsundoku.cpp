#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    stack<int> aa;
    stack<int> bb;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
     for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = n - 1; i >= 0; i--){
        aa.push(a[i]);
    }
    for(int i = m - 1; i >= 0; i--){
        bb.push(b[i]);
    }
    ll totalTime = 0;
    while(!aa.empty() || !bb.empty()){
        if(!aa.empty() && !bb.empty() && aa.top() <= bb.top() && totalTime + aa.top() <= k){
                //cout << "aa\n";
            totalTime += aa.top();
            aa.pop();
            ans++;
        }else if(!aa.empty() && !bb.empty() && aa.top() > bb.top()  && totalTime + bb.top() <= k){
             //cout << "bb\n";
            totalTime += bb.top();
            bb.pop();
            ans++;
        }else if(!aa.empty() && bb.empty() && totalTime + aa.top() <= k){
            // cout << "cc\n";
            totalTime += aa.top();
            aa.pop();
            ans++;
        }else if(aa.empty() && !bb.empty() && totalTime + bb.top() <= k){
           //  cout << "dd\n";
            totalTime += bb.top();
            bb.pop();
            ans++;
        }else{
            // cout << "pp\n";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
