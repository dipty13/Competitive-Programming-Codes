#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int i, n;
    string s;
    while(cin >> s)
    {
        n = s.size();
        int a[n + 5];
        memset(a, 0, sizeof(a));
        for(i = 0; i < n; i++)
        {
            if(i != n - 1){
            if(s[i + 1] != s[i])
            {
                a[i] = 1;
            }
            }else{
                if(s[i] == 'a')
            {
                a[i] = 1;
            }
            }

        }
        for(i = 0; i < n; i++)
        {
            cout << a[i] << " ";

        }
        cout << endl;
    }

    return 0;
}

