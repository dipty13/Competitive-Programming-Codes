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
        cin >> n;
        string s = "";

        i = 0;
        s= to_string(n);
        j = 0;
        p = s.size();
        vector<string> v(p + 5);
        for(i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] > '0')
            {
                v[j] = s[i];
                k = p - i - 1;
                //cout << v[j] << endl;
                while(k--)
                {
                    v[j] += '0';
                }
                j++;
            }
        }
        cout << j <<endl;
        for(i = 0; i < j; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;

    }

    return 0;
}

