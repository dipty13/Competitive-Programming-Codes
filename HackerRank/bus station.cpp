#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, i, sum = 0;
    cin >> n;
    int a[n + 5];
    map<int, int> m,s;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        s[i] = sum;
        m[sum] = i;
    }
    for(i = 0; i < n; i++)
    {
        p = s[i];
        while(m[s[i]]--)
        {

        }
    }


    return 0;
}
