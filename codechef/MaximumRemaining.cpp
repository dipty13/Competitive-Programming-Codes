/**
    by Shaila Nasrin Dipty
    Date: 05/04/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,i,j, b;
//    cin>>t;
//    while(t--)
//    {
        cin>>n;
        int a[n + 5];
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        if(a[n - 1] != a[n]){
        cout << a[n - 1] % a[n] << endl;
        }else if(n - 2 >= 1){
            cout << a[n - 2] % a[n] << endl;
        }else{
            cout << 0 << endl;
        }
   // }
    return 0;
}
