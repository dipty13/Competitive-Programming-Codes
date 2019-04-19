#include<bits/stdc++.h>

using namespace std;

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c) {
  //write your code here
  return std::min(std::min(a.size(), b.size()), c.size());
}

int main() {
  size_t an;
  cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++) {
    std::cin >> a[i];
  }
  size_t bn;
  cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++) {
    cin >> b[i];
  }
  size_t cn;
  cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++) {
    cin >> c[i];
  }
  cout << lcs3(a, b, c) << std::endl;
}
