#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int minOperations(vector<int> arr, int threshold, int d)
{
    map<int, int> m;
    map<int, int> p;
    int f = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        //cout << m[arr[i]] << " x " << arr[i] << endl;
        m[arr[i]]++;
        if(m[arr[i]] >= threshold)
        {
            //cout << m[arr[i]] << " " << threshold << endl;
            f = 1;
        }
    }
    if(f)
        return 0;
    int mn = 100000005, ans = 1000000005;
    for(int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];
        int c = 0;
        while(x> 0)
        {
            x = x/ d;
            p[x]++;
            c++;
            //cout << p[x] << " " << x << endl;
            if(p[x] + m[x] >= threshold)
            {
                f = 1;
                mn = p[x] + abs(p[x] - c);
                break;
            }
           // c++;
        }
        ans = min(mn, ans);
    }
    return ans;

}
int main()
{
    int n, t, k, m, a, b, c, threshhold, d;
    cin >> n;
    vector<int> v(n);
    vector<int> maxSubarray(n + 5);
    vector<ll> sum(n + 5);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> threshhold >> d;
    cout << minOperations(v, threshhold, d) << endl;
    return 0;
}
