#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n,m, t, a, i, l, j, sum = 0;
    while(cin>>n>>l>>a)
    {
        sum = 0;
        while(n--)
        {
            cin>> t >> i;
            sum += i;
        }
           m = l - sum;

        cout<< m / a <<endl;
    }

    return 0;
}
