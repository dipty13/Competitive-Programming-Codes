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
  int mx = 0;
  for(int i = 0; i < votes.size(); i++)
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
            mxString = it->second;
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
