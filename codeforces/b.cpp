#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, c, k, mx, i, j;
    while(cin >> n )
    {
       vector<int> v(n + 5);
       vector<int>::iterator it;
       int a[n + 5];
       set<int> s;
       set<int>::iterator st;
       for(i = 0; i < n; i++)
       {
           cin >> v[i];
           s.insert(v[i]);
       }
       if(n == 1){
        cout << 0 << endl;
        continue;
       }
       st = s.begin();
       k = *st;
       st++;
       int ans = abs(*st - k);
       k = *st;
       st++;
       int f = 1;
       for(; st != s.end(); st++)
       {
            if(abs(k - *st) != ans){
                  //  cout << *st << endl;
                f = 0;
                break;
            }else{
                k = *st;
            }
       }
        if(!f){
            cout << -1 << endl;
        }else{
            if(ans % 2 == 0){
                cout << ans / 2 << endl;
            }else{
                cout << ans << endl;
            }
        }
    }
    return 0;
}
