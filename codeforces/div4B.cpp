#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i, j, s, k, t, p = 0;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        i = 1;
        j = 0;
        while(1)
        {
            if(i % n != 0)
            {
                j++;
                if(j == k)
                {
                    cout << i << endl;
                    break;
                }
            }
            i++;
        }
    }
        return 0;
    }

