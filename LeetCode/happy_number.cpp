#include<bits/stdc++.h>
using namespace std;
int getSum(int n);
bool isHappy(int n)
{
    int sum = 0;
    map<int, int> mp;
    sum = getSum(n);
    mp[sum] = 1;
    n = sum;
    while(sum != 1)
    {
        sum = getSum(n);
        n = sum;
        if(mp[sum] == 1)
            return false;
        mp[sum] = 1;
    }
    return true;
}
int getSum(int n){
    int sum = 0;
    while(n != 0)
    {
        int x = n %10;
        x = x * x;
        sum += x;
        n /= 10;
    }
    return sum;
}
int main()
{
//    while(1){
//     int num = rand() % 10 + 1;
//     if((isHappy(num) != 1)){
//        cout << num << endl;
//        break;
//     }
//    }

    cout << ((isHappy(2) == 1)? "true" : "false") << endl;
    return 0;
}
