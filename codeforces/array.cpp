#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll na, nb, k, m, i;
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
        int index = nb - m , flag = 0;
       // cout << "index: " << index << "value: " << b[index] << endl;
            if(b[index] <= a[k - 1])
            {
                flag = 1;

            }

        if(flag)
        {
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}
