#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, m, c, i;
    while(cin >> n)
    {
       ll mCount = 0, cCount = 0;
       while(n--)
       {
           cin >> m >> c;
           if(m > c)
           {
               mCount++;
           }else if(m < c)
           {
               cCount++;
           }
       }
       if(mCount > cCount)
        {
               cout << "Mishka\n";
        }else if(mCount < cCount)
        {
               cout << "Chris\n";
        }else
        {
               cout << "Friendship is magic!^^\n";
        }
    }
    return 0;
}
