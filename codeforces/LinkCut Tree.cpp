#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, l, r, m, i, j, c;
    int k;
    while(cin >> l >> r >> k)
    {

        j = 0 , c = 1;
        //if(pow(k, j) <= r){
       while(true)
       {
            //m = pow(k, j);
            //cout << m << endl;
            if(pow(k, j) > r){
                break;
            }
            m = pow(k, j);
            if(m >= l && m <= r)
            {
                cout << m << " ";
                c = 0;
            }
            j++;

       }
       if(c){
           cout << -1;
       }
        cout << endl;
    }
    return 0;
}
