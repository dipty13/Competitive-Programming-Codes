#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
  int n, k,i ,j, c;
  while(cin >> n){
    int a[n + 5], b[n + 5];
//    vector<int> a(n + 5);
    for(i = 0; i < n; i++){
      cin >> a[i];
    }
    sort(a, a + n);
    j = n / 2;
    c = 0;
    for(i = 0; i < n / 2; i++){
            while(j < n){
      if(a[j] >= a[i] * 2)
      {
          c++;
          j++;
          break;
          //cout << a[i] << " " << j << endl;
      }
      j++;
    }
    if(j >= n){
        break;
    }

    }
    cout << n - c<< endl;
     //a.clear();
  }
  return 0;
}
