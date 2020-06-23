#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, m, b, i, p;
    cin>>t;
    while(t--)
    {
        cin>>n >> b >> m;
        int x = 0, l, r;
        l = 0, r = b - 1;
        int c = 0;
        for(i = 0;i < m; i++){
            cin >> p;
            if(i == 0 && p >= l && p <= r){
                c++;
            }else if(p >= l && p <= r){
                continue;
            }else{
                l = p;
                r = l + b - 1;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
