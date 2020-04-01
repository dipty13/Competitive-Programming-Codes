#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        string s = "";
        cin >> n >> k;
        ll i;
        for(i = 0; i < n - 2; i++)
        {
            s += 'a';
        }
        s += 'b';
        s += 'b';
        if(k == 1)
        {
            cout << s<< endl;
            continue;
        }
        i = 1;
        do
        {
            if (i == k)
                break;
            i++;
        }while (next_permutation(s.begin(), s.end()));
        cout << s << endl;
    }

    return 0;
}
