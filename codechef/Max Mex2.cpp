#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n,k,i,j,s[100005];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll x;
        ll mx = INT_MIN;
        map<ll,ll> m;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            m[s[i]]++;
            mx = max(s[i], mx);
        }
        int flag = 1;
        for(i  = 1; i <= mx; i++){
            if(i < k && m[i] == 0){
                flag = 0;
            }
        }
        if(flag == 0){
            cout << -1;
        }else
        cout<< n - m[k]<<endl;
    }

    return 0;
}
