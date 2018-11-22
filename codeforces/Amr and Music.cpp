#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
#define MAX 1e18
#define mypair pair<int, int>

using namespace std;
bool cmp(const mypair& a, const mypair& b)
{
    return a.second < b.second;
}
int main()
{
    int n, i, k, x, c;
    while(cin >> n >> k)
    {
        int a[n + 5];
        map<int,int> m;

       for(i = 1; i <= n; i++)
        {
            cin >> c;
            m[i] = c;
        }
        vector<mypair> v(begin(m), end(m));
        sort(v.begin(), v.end(), cmp);
        int j = 0, sum = 0;
       for(i = 0; i < v.size(); i++)
       {
           if(sum + v[i].second > k)
           {
               break;
           }
           sum += v[i].second;
           if(sum > k)
           {
               break;
           }
           a[j] = v[i].first;
           j++;
       }
       cout << j << endl;
       for(i = 0; i < j; i++)
       {
           cout << a[i] << " ";
       }
        cout << endl;
    }
    return 0;
}
