#include<bits/stdc++.h>
using namespace std;
//recursive solution
//int stepPerms(int n)
//{
//    if(n <= 2)
//    {
//        return n;
//    }
//    else if(n == 3)
//    {
//        return 4;
//    }
//    return stepPerms(n - 1) + stepPerms(n - 2) + stepPerms(n - 3);
//}
//memoization
int dp[10000];
int stepPerms(int n)
{
    if(n <= 2)
    {
        return n;
    }
    else if(n == 3)
    {
        return 4;
    }
    if(dp[n] == 0)
        dp[n] = stepPerms(n - 1) + stepPerms(n - 2) + stepPerms(n - 3);
    return dp[n];
}
//iterative
int stepPerms(int n)
{
    if(n <= 2)
    {
        return n;
    }
    int a = 1, b = 2, c;
    for( i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    int s, n;
    cin >> s;
    while(s--)
    {
        cin >> n;
        cout << stepPerms(n) << endl;
    }
    return 0;
}
