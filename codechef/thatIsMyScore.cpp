/**
    by Shaila Nasrin Dipty
    Date: 06/12/2019
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int getScore(map<int,int> m){
    map<int, int>::iterator it;
    ll sum = 0;
    for(it = m.begin(); it != m.end(); it++){
        sum += it->second;
    }
    return sum;
}
int main()
{
    int n,t,sum,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int, int> m;
        for(i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if(a < 9 && m[a] < b){
                m[a] = b;
            }
        }
        cout << getScore(m) << endl;

    }
    return 0;
}
