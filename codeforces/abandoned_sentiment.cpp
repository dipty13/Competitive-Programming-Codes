#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m,  c, i;
    //cin >> t;
    while(cin >> n >> k)
    {
        vector<int> a(n + 5);
        vector<int> p = {};
        vector<int> b(k + 5, INT_MAX);
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        ll j = 0;
        if(a[0] == 0)
        {
            a[0] = b[j];
            j++;
        }
        i = 1;
        while(j < k && i < n)
        {
            if(a[i] != 0)
            {
                i++;
            }
            else
            {
                while(j < k && b[j] < a[i - 1] )
                {
                       //cout << j << " p " << b[j] << " " << a[i - 1] << endl;
                       if(i == n - 1 && j == k - 1){
                        break;
                       }
                        j++;
                }
                a[i] = b[j];
                //cout << "ppp " << a[i] << endl;
                i++;
            }
        }
        if(n == 1 && a[0] == 0){
            cout << "Yes\n";
            continue;
        }
        ll f = 0;
        for(i = 0; i < n; i++){
            p.push_back(a[i]);
        }
        sort(p.begin(), p.end());
        if(p[0] != a[0]){
            cout << "Yes\n";
            continue;
        }
        for(i = 1; i < n; i++){
            if(a[i] <= a[i - 1] || a[i] == 0 || p[i] != a[i]){
               // cout << a[i] << " " << a[i - 1] << " " << p[i]<< endl;
                f = 1;
                break;
            }
        }
        if(f){
           cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}
