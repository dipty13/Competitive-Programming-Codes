#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int p = x;
        long long int reversedNumber = 0;
        while(x != 0){
            int digit = x % 10;
            reversedNumber = (reversedNumber  * 10) + digit;
            x /= 10;
        }
        return reversedNumber == p;
    }

int main()
{

    cout << ((isPalindrome(232) == 1) ? "True" : "False") << "\n";
    return 0;
}

