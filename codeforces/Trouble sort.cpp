#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> a(n + 5, INT_MAX);
        vector<ll> b(n + 5);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(b[i] != b[j]){
                    if(j < i && a[j] > a[i]){
                        swap(a[j], a[i]);
                        swap(b[j], b[i]);
                    }else  if(j > i && a[i] > a[j]){
                        swap(a[j], a[i]);
                        swap(b[j], b[i]);
                    }
                }
            }
        }
        vector<int> p(n + 5, INT_MAX);
        for(int i = 0; i < n; i++){
            //cout << a[i] << " ";
            p[i] = a[i];
        }
        //cout << endl;
        sort(p.begin(), p.end());
        int flag = 1;
        for(int i = 0; i < n; i++){
           if(p[i] != a[i]){
                flag = 0;
                break;
           }
        }
        if(flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
        return 0;
    }
