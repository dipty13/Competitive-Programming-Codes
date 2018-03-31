#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  ios_base::sync_with_stdio(0);
    int fac[13];
    fac[0] = 1;
    for (int i = 1; i < 13; ++i)
    {
        fac[i] = i * fac[i - 1];

    }


    int n, k;
    while (cin >> n >> k)
    {
        // Coefficient = n!/(n1! n2! n3!...)
        int product = 1;
        for (int i = 1; i <= k; ++i)
        {
            int n_i;
            cin >> n_i;
            product *= fac[n_i];
        }
        cout << fac[n] / product << endl;
    }

   cerr<<"Elapsed Time: "<<clock()*100.0/CLOCKS_PER_SEC<<"ms\n";
    return 0;
}
