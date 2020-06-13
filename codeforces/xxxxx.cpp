#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int longSubarrWthSumDivByK(vector<ll> arr,
                          int n, int k)
{
    // unodered map 'um' implemented as
    // hash table
    unordered_map<int, int> um;

    // 'mod_arr[i]' stores (sum[0..i] % k)
    int mod_arr[n], max = 0;
    int curr_sum = 0;

    // traverse arr[] and build up the
    // array 'mod_arr[]'
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];

        // as the sum can be negative, taking modulo twice
        mod_arr[i] = ((curr_sum % k) + k) % k;
    }

    for (int i = 0; i < n; i++)
    {
        // if true then sum(0..i) is divisible
        // by k
        if (mod_arr[i] != 0)
            // update 'max'
            max = i + 1;

        // if value 'mod_arr[i]' not present in 'um'
        // then store it in 'um' with index of its
        // first occurrence
        else if (um.find(mod_arr[i]) == um.end()){
            // if true, then update 'max'
            if (max < (i - um[mod_arr[i]]))
                max = i - um[mod_arr[i]];
        }
        else
                 um[mod_arr[i]] = i;

    }

    // required length of longest subarray with
    // sum divisible by 'k'
    return max;
}
int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<ll> v(n + 5);
        vector<ll> maxSubarray(n + 5);
        vector<ll> sum(n + 5);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
//        sum[0] = v[0];
//        if(v[0] % m != 0){
//         maxSubarray[0] = 1;
//        }else{
//          maxSubarray[0] = 0;
//        }
//        ll mx = maxSubarray[0];
//         for(int i = 1; i < n; i++){
//               // cout << sum[i - 1] + v[i] << endl;
//            if((sum[i - 1] +  v[i]) % m != 0){
//                maxSubarray[i] = i + 1;
//                sum[i] = sum[i - 1] + v[i];
//            }else if()
//            else if((v[i - 1] + v[i]) % m != 0){
//                maxSubarray[i] = 2;
//                sum[i] = sum[i - 1] + v[i];
//            }
//            else{
//                sum[i] = sum[i - 1] + v[i];
//                if(v[i] %  m != 0){
//                   // cout << v[i] << endl;
//                    maxSubarray[i] = 1;
//                }else{
//                    maxSubarray[i] = 0;
//                }
//
//            }
//            mx = max(mx, maxSubarray[i]);
//        }
        ll mx = longSubarrWthSumDivByK(v,n, m);
        if(mx <= 0)
            cout << -1 << endl;
        else
        cout << mx << endl;
    }
        return 0;
}
