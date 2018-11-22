#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    string data;
    Node* next;
};
vector<string> v[1005];
void insert( string name)
{
    Node *tmp = new Node();
    tmp->data = name;
}
int hashFunction(string s)
{
    int sum = 0;
    for(int i = 0 ;i < s.size(); i++)
    {
        sum += s[i] - 'a';
    }
    return sum % 10;
}
int main()
{
    Node ob;
    string x = "dip";
     int p = hashFunction(x);
    v[p].push_back("dipty");
    v[p.push_back("dip");
    string y = "dipty";
    fro(int i = 0 ; i < v[hashFunction(y)].size(); i++)
    {
        if(v[hashFunction(y)][i] -> data == y)
        {
            cout<<"found\n";
        }
    }
    return 0;
}
