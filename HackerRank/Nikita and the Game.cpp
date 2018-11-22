#include <bits/stdc++.h>

using namespace std;

vector<int> arr(100005);

/*
 * Complete the arraySplitting function below.
 */
int arraySplitting(int l, int r) {
    if(r - 1 <= l)
    {
         return 0;
    }
    long long int total = accumulate(arr.begin() + l, arr.begin() + r, 0LL);
    if(total % 2)
    {
        return 0;
    }
    long long int partial = 0;
    for(int i = l; i < r; i++)
    {
        partial += arr[i];
        if(total / 2 == partial)
        {
            return 1 + max(arraySplitting(l, i + 1), arraySplitting(i + 1, r));
        }
    }

    return 0;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int arr_count;
        cin >> arr_count;

        for (int arr_itr = 0; arr_itr < arr_count; arr_itr++) {
            cin >> arr[arr_itr];
        }

        int result = arraySplitting(0, arr_count);

        cout << result << "\n";
        arr.clear();
    }

    //fout.close();

    return 0;
}


