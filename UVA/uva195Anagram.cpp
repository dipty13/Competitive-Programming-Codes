#include<bits/stdc++.h>
using namespace std;
bool compare(char a, char b){
  char lower_a = tolower(a), lower_b = tolower(b);
  if( lower_a == lower_b ){
    return a < b;
  }
  else return lower_a < lower_b;
}

int main(){
  int n,c;
      string input;
  while( scanf("%d", &n) != EOF ){

    for( int i = 0 ; i < n ; ++i ){
      cin >> input;
     // c=0;
      sort(input.begin(), input.end(), compare);
      do {
           // c++;
        printf("%s\n", input.c_str());
      } while( next_permutation(input.begin(), input.end(), compare) );
      //cout<<c<<endl;
    }

  }
  return 0;

}
