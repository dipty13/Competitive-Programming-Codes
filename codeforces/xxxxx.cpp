#include<bits/stdc++.h>
using namespace std;
ifstream f("a_example.in");
ofstream o("output.out");

int main()
{
    long long int t,m, n, i;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<int> v(n  + 5);
        long long int sum = 0, mx =-1;
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if(sum % m)
        {
            cout << n << endl;
            continue;
        }
        sum = 0;
        for(i = 0; i < n; i++){
            sum = (sum + v[i]) % m;
            if(sum){
                mx = max(mx, i + 1);
                mx = max(mx, n - (i + 1));
            }
        }
        cout << mx << endl;
    }


    return 0;
}
