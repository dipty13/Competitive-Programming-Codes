#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n1, n2, n3, i, j, k, sumn1 = 0, sumn2 = 0, sumn3 = 0;
    cin >> n1 >> n2 >> n3;
    long long int a[n1 + 5], b[n2 + 5], c[n3 + 5];
    memset(a,0, sizeof(a));
    memset(b,0, sizeof(b));
    memset(c,0, sizeof(c));
    for(i = 1; i <= n1; i++)
    {
        cin >> a[i];

    }
    for(i = 1; i <= n2; i++)
    {
        cin >> b[i];

    }
    for(i = 1; i <= n3; i++)
    {
        cin >> c[i];

    }
    reverse(a + 1, a + n1 + 1);
    reverse(b + 1, b + n2 + 1);
    reverse(c + 1, c + n3 + 1);
     for(i = 1; i <= n1; i++)
    {
        a[i] += a[i - 1];

    }
    for(i = 1; i <= n2; i++)
    {
        b[i] += b[i - 1];
    }
    for(i = 1; i <= n3; i++)
    {
        c[i] += c[i - 1];
    }
    while(a[n1] != b[n2] || a[n1] != c[n3]){
        if(a[n1] > b[n2]){
            n1--;
        }
        if(a[n1] > c[n3]) {
                n1--;
        }
        if(b[n2] > c[n3]) {
                n2--;
        }
        if(a[n1] < b[n2]){
                n2--;
        }
        if(a[n1] < c[n3]){
                n3--;
        }
        if(b[n2] < c[n3]) {
                n3--;
        }
    }

    cout << a[n1] << endl;
    return 0;
}
