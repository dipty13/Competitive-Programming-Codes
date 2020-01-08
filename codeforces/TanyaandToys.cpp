#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
vector<long long int> solve(long long int m, map<long long int,long long int> mp)
{
    vector<long long int> ans(m + 5);
    ll sum = 0, c = 0;
    for(long long int i = 1; i <= m; i++)
    {
        if(sum == m)
        {
            break;
        }
        if(mp[i] != 1 && sum + i <= m)
        {
            sum += i;
            c++;
            ans.push_back(i);

        }else if(sum + i > m){
            break;
        }
        if(sum == m)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    long long int n, m, i, j;
    while(cin >> n >> m)
    {
        vector<long long int> v(n + 5);
        map<long long int,long long int> mp;
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }
        vector<long long int> ans = vector<long long int>(solve(m, mp));
        //ll p = ans.first;
        for(i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }

    return 0;
}

