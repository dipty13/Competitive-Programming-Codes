#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main()
{
    long long int n,m,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n >> m;
        i = n;
        if(i % 2)
            n = i;
        else{
        for(i = n - 1; i >= 0; i--){
                if(i % 2 == 1 && n % i == 0){
                    break;
                }
        }
        }
        cout << i << endl;
        j = (i * (i + 1)) / 2;
        cout << j % m << endl;
    }

    return 0;
}
