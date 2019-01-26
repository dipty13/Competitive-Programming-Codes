#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string voteWinner(vector<string> votes)
{
  // Please write your code here.
  map<string, int> m;
  map<string, int>::iterator it;
  string mxString = "";
  int mx = 0, n = votes.size();
  for(int i = 0; i < n - 1; i++)
  {
    m[votes[i]]++;
  }
  for(it = m.begin(); it != m.end(); it++)
  {
    if(it == m.begin())
    {
        mxString = it->first;
    }else{
        if(mx <= it->second)
        {
            mxString = it->first;
        }
    }
  }
  return mxString;
}
int main()
{
  int votes_count;
  cin >> votes_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  vector<string> votes(votes_count);
  for (int i = 0; i < votes_count; i++) {
    string votes_item;
    getline(cin, votes_item);
    votes[i] = votes_item;
  }
  cout << voteWinner(votes) << endl;
}
