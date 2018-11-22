#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int main()
{
    ll n, d, mn, i, ans;
    while(cin >> n)
    {
        ll a[n + 5];
        ll chest = 0, bicep = 0, backk = 0, c = 1, bp = 2, bk = 3;
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(i == c)
            {
                chest += a[i];
                c += 3;
            }else if(i == bp)
            {
                bicep += a[i];
                bp += 3;
            }else if(i == bk)
            {
                backk += a[i];
                bk += 3;
            }
        }
        //cout << chest << " " << bicep << " " << backk << endl;
        if(chest >= bicep && chest >= backk)
        {
            cout << "chest\n";
        }else if(bicep >= chest && bicep >= backk)
        {
            cout << "biceps\n";

        }else if(backk >= chest && backk >= bicep)
        {
            cout << "back\n";
        }
    }
    return 0;
}
