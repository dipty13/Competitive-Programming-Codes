#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << is_array<int>::value;
    cout << is_array<char[10]>::value;
    cout << is_array<string>::value;
    return 0;
}
