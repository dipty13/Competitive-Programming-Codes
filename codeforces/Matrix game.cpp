#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, a, b, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<vector<ll> > v(n, vector<ll>(m, 0));
        map<int, int> p;
        map<int, int> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> v[i][j];
            }
        }
        int i = 0, j = 0, c = 0;
        while( i < n && j < m){
                int k = i, l = j, flag = 0;
            while(k >= 0){
                if(v[k][j] == 1){
                    flag = 1;
                    break;
                }
                k--;
            }
            if(flag){
                j++;
                continue;
            }
            k  = i;
            while(k < n){
                if(v[k][j] == 1){
                    flag = 1;
                    break;
                }
                k++;
            }
            if(flag){
                j++;
                continue;
            }
             while(l >= 0){
                if(v[i][l] == 1){
                    flag = 1;
                    break;
                }
                l--;
            }
            if(flag){
                i++;
                continue;
            }
            l = j;
            while(l < m){
                if(v[i][l] == 1){
                    flag = 1;
                    break;
                }
                l++;
            }
            if(flag){
                i++;
                continue;
            }
            if(flag == 0){
                c = !c;
                //cout << i << " " << j << " " << v[i][j] << endl;
                v[i][j] = 1;
                i++;
                j++;
            }
        }
        if(c)
            cout << "Ashish\n";
        else
            cout << "Vivek\n";

    }
        return 0;
    }
