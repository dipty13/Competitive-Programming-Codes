#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
bool hasSeven(int h, int m){
    return (h % 10 == 7 || m % 10 == 7);
}

int minNumber(int h, int m, int n){
    int c = 0;
    while(!hasSeven(h,m)){
        if(m >= n){
            m -= n;
        }else{
            m +=60 - n;
            h--;
            if(h < 0){
                h = 23;
            }
        }
        //cout << m << endl;
        c++;
    }
    return c;
}
int main()
{
    ll m, h, n, i, j, c;
    while(cin >> n >> h >> m )
    {
        cout << minNumber(h,m, n) << endl;
    }

    return 0;
}

