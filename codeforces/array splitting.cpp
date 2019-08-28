#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n, k, i;
    while(cin >> n >> k)
    {
        vector<int> a(n + 5);
        vector<int> b(n  + 5, INT_MAX);
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(k == 1){
            cout << a[n - 1] - a[0] << endl;
            continue;
        }
        for(i = 1; i <n; i++){
            b.push_back(a[i - 1] - a[i]);
            //cout << a[i] - a[i - 1] << endl;
        }
          //cout << b[0] << endl;
        sort(b.begin(), b.end());
        long long int ans = a[n - 1] - a[0];

        for(i = 0; i < k - 1; i++){
           // cout << b[i] << endl;
            ans += b[i];
        }
        if(n == k)
        {
            cout << 0 << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}
