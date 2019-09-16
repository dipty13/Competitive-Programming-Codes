#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n,i, j, c;
    while(cin >> n){
       vector<int> a(n + 5);
       vector<int> b(n + 5);
       mi m;
       string s;
       cin >> s;
       for(i = 0; i < n; i++){
         cin >> a[i] >> b[i];
       }
       int mx = INT_MIN;
       int c = 0;
       int x = b[i], k = 0, f = 0;
       for(i = 0; i < n; i++){
            f = 0;
            if(s[i] == '0'){
           for(j = 0; j <= 100; j++){
                int x = b[i] + (j * a[i]);
                if(f == 1){
                        f = 0;
                for(int p = b[i] + ((j - 1) * a[i]); p < x; p++){
                    m[(int)p]++;
                }
                }else if(f == 0){
                    f = 1;
                }
           }
          }else{
           for(j = 0; j <= 100; j++){
                int x = b[i] + (j * a[i]);
                if(f == 0){
                        f = 1;
                for(int p = b[i] + ((j - 1) * a[i]); p < x; p++){
                    m[p]++;
                }
                }else if(f == 1){
                    f = 0;
                }
           }
          }
       }
       mi::iterator it;

       for(i = 0; i < s.size(); i++){
           if(s[i] == '1'){
            c++;
           }
       }
       for(it = m.begin(); it != m.end(); it++){
            //cout << it->first << " ";
         mx = max(mx, it->second);
       }
       //cout << mx << endl;
       cout << endl << max(mx, c) << endl;


    }

    return 0;
}

