#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b)
{
  return a.first - a.second > b.first - b.second;
}
void print(int n){
    if(n > 1){
    print(n - 1);
    }
    cout << n << endl;
}
int main()
{
    print(5);
    return 0;
}
