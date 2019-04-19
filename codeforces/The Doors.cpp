#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    int n, i, m, t, j, k = 0, c, q,cnt;
    while(cin >> n)
    {
        int a[n + 5];
        c = 0, cnt = 0;
        map<int, int> m;
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
            m[a[i]]++;

        }
         for(i = 1; i <= n; i++)
        {
            m[a[i]]--;
            if(m[a[i]] == 0){
                cout << i << endl;
                break;
            }


        }

    }
    return 0;
}

