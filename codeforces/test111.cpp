#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
// #include <algorithm>
// #include <bitset>
// #include <regex>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    string findingValues = "";
    while(N > 0){
        int digit = N % 10;
        findingValues += (char)(digit + 48);
        N /= 10;
    }
    findingValues += '5';
    sort(findingValues.begin(), findingValues.end());
    reverse(findingValues.begin(), findingValues.end());
    int numberToMultiply = 1;
    int sizeOfString = findingValues.size();
    while(sizeOfString > 0){
        numberToMultiply *= 10;
        sizeOfString--;
    }
    int result = 0;
    cout << findingValues << endl;
    for(int i = 0; i < findingValues.size(); i++){
        int number = (int)(findingValues[i] - 48);
        result += number * numberToMultiply;
        //cout << number << " " << result << endl;
        numberToMultiply /= 10;
    }
    return result;
}
int main()
{
        cout << "pp " << solution(268) << endl;
        return 0;
}
