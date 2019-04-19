#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    int n, i, m, t, j, k = 0, c, q,cnt;
    int a[1000];
    while(cin >> a[0])
    {
        //int a[n + 5];
        c = 0, cnt = 0;
        for(i = 1; i <= 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 4);
        int p, q, r;
        p = a[3] - a[2];
        q = a[3] - a[1];
        r = a[3] - a[0];
        cout << p << " " << q << " " << r << endl;

    }
    return 0;
}

