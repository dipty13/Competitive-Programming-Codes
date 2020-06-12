#include<bits/stdc++.h>
using namespace std;
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleCount = 0, orangeCount = 0;
    for(int i = 0; i < apples.size(); i++){
        if(apples[i] + a >= s && apples[i] + a <= t)
            appleCount++;
    }
    for(int i = 0; i < oranges.size(); i++){
        if(oranges[i] + b >= s && oranges[i] + b <= t)
            orangeCount++;
    }
    cout << appleCount << endl << orangeCount;
}
int main()
{
    int s, t, a, b, m, n;
    cin>> s >> t>> a >> b>> m >> n;
    vector<int> apples(m + 5);
    vector<int> oranges(n + 5);
    for(int i = 0; i < m; i++){
        cin >> apples[i];
    }
    for(int i = 0; i < n; i++){
        cin >> oranges[i];
    }
    countApplesAndOranges(s, t, a, b, apples, oranges);
    return 0;
}
