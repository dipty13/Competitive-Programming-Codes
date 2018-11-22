#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, c, k, mx, i, j;
    while(cin >> n >> k)
    {
        int a[n + 5];
        map<int , int> m;
        map<int , int>:: iterator it;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        c = m.size();
       cout << (c * (c / 3+ c % 3) * k) - (c * k) + (c / 3+ c % 3)<< endl;

    }
    return 0;
}
