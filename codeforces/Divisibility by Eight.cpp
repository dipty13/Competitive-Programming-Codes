#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n,i,j,k,c;
    string s;
    while(cin >> s)
    {
        if(s.size() == 1)
        {
            k = (int) (s[0] - 48);
            if(k % 8 == 0)
            {
                cout << "Yes\n";
                cout << k << endl;
                continue;
            }
            else
            {
                cout << "No\n";
                continue;
            }
        }
        if(s.size() == 2)
        {
            k = (int) (s[0] - 48);
            c = (int) (s[1] - 48);
            if((k * 10 + c) % 8 == 0)
            {
                cout << "YES\n";
                cout << s << endl;
                continue;
            }
            else  if(k % 8 == 0)
            {
                cout << "YES\n";
                cout << k << endl;
                continue;
            }
            else  if(c % 8 == 0)
            {
                cout << "YES\n";
                cout << c << endl;
                continue;
            }
            else
            {
                cout << "NO\n";
                continue;
            }
        }
        bool flag = false;
        ll p = 0, q = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            k = (int)s[i] - 48;
            if(k % 8 == 0)
            {
                cout << "YES\n";
                cout << k << endl;
                flag = true;
                break;
            }
            for(ll j = i + 1; j < s.size(); j++)
            {
                ll x = 0;
                if(i != j)
                {
                    p = (int)s[j] - 48;
                    x = k * 10 + p;
                    if(x % 8 == 0)
                    {
                        cout << "YES\n";
                        cout << x << endl;
                        flag = true;
                        break;
                    }
                    else if(p % 8 == 0)
                    {
                        cout << "YES\n";
                        cout << p << endl;
                        flag = true;
                        break;
                    }

                    for(ll l = j + 1; l < s.size(); l++)
                    {
                        if(i != l && j != l)
                        {
                            q = (int)s[l] - 48;
                            ll y = x * 10 + q;
                            if(y % 8 == 0)
                            {
                                cout << "YES\n";
                                cout << y << endl;
                                flag = true;
                                break;
                            }
                            else if(q% 8 == 0)
                            {
                                cout << "YES\n";
                                cout << q << endl;
                                flag = true;
                                break;
                            }
                        }
                    }
                }
                if(flag)
                    break;

            }
            if(flag)
                break;
        }
        if(!flag)
        {
            cout << "NO\n";
        }
    }
    return 0;
}
