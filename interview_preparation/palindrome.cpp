#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(string str) {
	int l = 0, r = str.size() - 1;
	while(l < r){
		if(str[l] == str[r]){
			l++, r--;
		}else{
			return false;
		}
	}
	return true;
}
int main()
{
   // vector<int> a = {2, 1};
   string a = "a";
    cout << (isPalindrome(a) == true) ? "true\n" : "false\n";
//    for(int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i] << " ";
//    }
    cout << endl;
    return 0;
}
