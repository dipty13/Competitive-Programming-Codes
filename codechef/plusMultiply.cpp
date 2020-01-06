/**
    by Shaila Nasrin Dipty
    Date: 06/12/2019
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll getPlusMultiply(vector<ll> v){
    map<ll, ll> m;
    ll sum = 0;
    for(int i = 0; i < v.size(); i++){
        m[v[i]]++;
    }
    for(ll i = m[2] - 1; i >= 1; i--){
        sum += i;
    }
    for(ll i = m[0] - 1; i >= 1; i--){
        sum += i;
    }
    return sum;
}
ll getPlusMultiply2(vector<ll> v){
    map<ll, ll> m;
    ll c = 0;
    for(int i = 0; i < v.size(); i++){
       for(int j = i + 1; j < v.size(); j++){
        if(i != j && v[i] * v[j] == v[i] + v[j]){
            c++;
        }
       }
    }
    //cout << m[2] << endl;
    return c;
}
void stressTest(){
    while(true)
    {
        int x=rand()%10+2;
        printf("%d\n",x);
        vector<ll> b(x);
        int i;
        for(i=0;i<x;i++)
        {
            b[i] = rand()%100000;
            printf("%lld ",b[i]);
        }
        printf("\n");
        ll p=getPlusMultiply2(b);
        ll q=getPlusMultiply(b);
        if(p!=q)
        {
            printf("Wrong answer: %lld %lld\n",p,q);
            break;
        }
        else{
            printf("Ok\n");
        }
    }
}
void solve(){
    ll n,t,sum,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll> v(n);
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << getPlusMultiply(v) << endl;
        //cout << getPlusMultiply2(v) << endl;

    }
}
int main()
{
   // stressTest();
   solve();
    return 0;
}
