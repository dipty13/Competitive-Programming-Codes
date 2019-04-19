#include<bits/stdc++.h>
#define ll long long int
#define mp map<string, ll>
using namespace std;
mp m;
ll powerOfSum(vector<int> v, int index, int x, int n)
{
    if(x == 0)
    {
        return 1;
    }
    if(index >= v.size()){
        return 0;
    }
    string s = to_string(x) + "-" + to_string(index);
    if(m.count(s)){
        return m[s];
    }
    int p =  powerOfSum(v, index + 1, x, n) +
            powerOfSum(v, index + 1, x - pow(v[index], n), n);
    m[s] = p;
    return p;
}
int main()
{
    int n, i, j, x, p;
    while(cin >> x >> n)
    {
        vector<int> v;
        p = pow(x, 1.0/ n);
        for(i = 1; i <= p; i++)
        {
            v.push_back(i);
        }
        cout << powerOfSum(v, 0, x, n) << endl;
    }
    return 0;
}
