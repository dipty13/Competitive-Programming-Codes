#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
  int n, i, t, x, y, m, m2;
  while(cin >> n >> m)
  {
    vector<int> a;
    ll c = 0;
     x =__gcd(n, m);
     y = sqrt(x);

    for(i = 1; i <= y; i++)
    {
        if(x % i == 0)
        {
           a.push_back(i);
           a.push_back(x / i);
           // cout << a[i] << " ";
        }
    }
    sort(a.begin(), a.end());
//    for(i = 0; i < a.size(); i++)
//    {
//        cout << a[i] << " ";
//    }
    int q,  low, high;
    //cout << endl;
    cin >> q;
    while(q--){
        cin >> low >> high;
       // int l = upper_bound(a + 1, a + n + 1, low) - (a + 1);
        int h = upper_bound(a.begin(), a.end(), high) - a.begin();
       // cout << l << " " << h << endl;
       h--;
        if(a[h] <= high && a[h] >= low){
        cout << a[h] << endl;
        }else{
            cout << -1 << endl;
        }
    }
  }
  return 0;
}

