#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i, k, j, sum, sum2 ;
    while(cin>>n)
    {
        int a[n+5];
        sum = 0, sum2 = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        sort(a, a + n);
        k = a[n - 1];
        while(sum2 <= sum)
        {
            sum2 = 0;
            //cout << k << endl;
            for(j = 0; j < n; j++)
            {
                sum2 += (k - a[j]);
            }
            k++;

            //cout << sum2 << " " << k << endl;
        }
        cout << k - 1<< endl;


    }
    return 0;
}
