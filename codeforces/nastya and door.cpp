#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
vector<int> v(1000005, 0);
bool isPeak(int i){
    return v[i] > v[i - 1] && v[i] > v[i + 1];
}
void numberOfPeaks( int k, int n){
    int c = 0, ans = 0, l = 1;
    for(int i = 2; i < k; i++){
       c += isPeak(i);
    }
    ans = c;
    for(int i = k; i < n; i++){
        c += isPeak(i) - isPeak(i - k + 2);
        if(ans < c){
            ans = c;
            l = i - k + 2;
        }
    }
    cout << ans + 1 << " " << l << endl;
}
int main()
{
    int t, n, k;
    //cin.sync_with_stdio( false );
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        numberOfPeaks(k, n);
    }


    return 0;
}

