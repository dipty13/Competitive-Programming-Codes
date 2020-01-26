#include<bits/stdc++.h>
using namespace std;
string breakPalindrome(string palindrome) {
    if(palindrome.size() == 1){
           return "";
    }
    int n = palindrome.size();
    int o = 0;
    if(n % 2){
        o = 1;
    }
    for(int i = 0; i < n; i++){
        if(o == 1 && i == n /2){
            continue;
        }else if(palindrome[i] > 'a'){
            palindrome[i] = 'a';
            return palindrome;
        }else if(palindrome[i] == 'a' && i == n - 1){
            palindrome[i] = 'b';
            return palindrome;
        }
    }
    return "";
}
int main()
{
    vector<int> num = {37,12,28,9,100,56,80,5,12};
   // vector<int> ans = vector<int>(arrayRankTransform(num));
//     for(int i = 0; i < ans.size(); i++){
//            cout << ans[i] << " ";
//        }
//        cout << endl;
    cout << breakPalindrome("aabaa")<< endl;
    return 0;
}
