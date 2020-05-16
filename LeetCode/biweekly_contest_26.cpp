#include<bits/stdc++.h>
using namespace std;
void fibonacciNumbers(vector<int> &v, int k)
{
    int i, n = 0;
    v.push_back(1);
    v.push_back(1);
    n = v[0] + v[1];
    v.push_back(n);
    i = 3;
    while(n <= k)
    {
        n = v[i - 1] + v[i - 2];
        v.push_back(n);
        i++;
    }
}
int findMinFibonacciNumbers(int k)
{
    vector<int> v;
    fibonacciNumbers(v, k);
    int c = 0, i = v.size() - 1;
    while(k > 0)
    {
        c += (k / v[i]);
        k %= v[i];
        i--;
    }
    return c;
}
int main()
{
    vector<int> num = {4,1,2,1,2};
    cout << findMinFibonacciNumbers(19) << endl;
    return 0;
}
