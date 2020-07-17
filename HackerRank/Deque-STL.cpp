#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void printKMax(int arr[], int n, int k)
{
    deque<int> q;
    int i;

    for(i=0; i<k; i++)
    {
        q.push_back(arr[i]);
    }
    int mx = *max_element(q.begin(), q.end());
    cout << mx << " ";
    for(i=k; i<n; i++)
    {
        q.push_back(arr[i]);
        if(q[0] == mx){
            q.pop_front();
            mx = *max_element(q.begin(), q.end());
            cout << mx << " ";
        }else{
            q.pop_front();
            if(arr[i] > mx){
                mx = arr[i];
            }
            cout << mx << " ";
        }

    }
    cout << endl;

}

int main()
{

    int t;
    cin >> t;
    while(t>0)
    {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n + 1];
        for(i=0; i<n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
