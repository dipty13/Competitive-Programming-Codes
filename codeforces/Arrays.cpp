#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll na, nb, k, m;
    while(cin >> na >> nb)
    {
        int a[na + 5], b[nb + 5];
        cin >> k >> m;
        for(i = 0; i < na; i++)
        {
            cin >> a[i];
        }
        for(i = 0; i < nb; i++)
        {
            cin >> b[i];
        }
        int index = nb - m - 1, flag = 0;
        for(i = 0; i < k; i++)
        {
            if(b[index] <= a[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout << "NO\n";
        }else{
            cout << "YES8\n";
        }
    }

    return 0;
}
