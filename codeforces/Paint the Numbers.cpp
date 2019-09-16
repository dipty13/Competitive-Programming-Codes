#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n,i, j, c;
    while(cin >> n){
       vector<int> v(n + 5, INT_MAX);
       mi m;
       for(i = 0; i < n; i++){
         cin >> v[i];
       }
       c = 0;
       int f = 0;
       sort(v.begin(), v.end());
       for(i = 0; i < n; i++){
            f = 0;
         for(j = i + 1; j < n; j++){
            if(m[i] != 1 && m[j] != 1 && v[j] % v[i] == 0){
                f = 1;
                m[j] = 1;
         //cout << v[j] << endl;
            }
         }
         if(f){
            c++;
         }else if(f == 0 && m[i] != 1){
            //cout << "ll "<< v[i] << endl;
             c++;
         }
       }
       cout << c<< endl;


    }

    return 0;
}

