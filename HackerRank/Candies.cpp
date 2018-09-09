#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> a) {
    vector<long> dp(n+5);
    long c = 0,f =0;
    for(int i = 0;i<=n;i++)
    {
        dp[i] = 1;
    }
    a[0] = 0;
    dp[0] = 0;
    for(int i = 1;i<=n;i++)
    {
            if(a[i]>a[i-1])
            {
                 dp[i] += dp[i-1];
            }
    }
    c =0;
    for(int i = n-1;i>=1;i--)
    {
            if(a[i] > a[i+1] && dp[i] < dp[i+1]+1) {
			dp[i] = dp[i+1]+1;
		}
    }
    for(int i = 1;i<=n;i++)
    {
        c+=dp[i];
    }
    return c;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n+100);

    for (int i = 1; i <= n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    //fout << result << "\n";

   // fout.close();
    cout<<result<<endl;
    return 0;
}
