#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
class HashTable{
class Node{
    public:
    string x;
    Node* next;

};
Node* v[100 + 5];
    public:
        HashTable();
        bool search1(string p);
        int hash1(string p);
        void insert1(string p);

};

  HashTable:: HashTable()
    {
        for(int i = 0;i <100;i++)
    {
        v[i] = new Node;
        v[i]->x = "empty";
        v[i]->next = NULL;
    }
    }

int HashTable::hash1(string n)
{
    int sum = 0;
    for(int i = 0; i < n.size(); i++)
    {
        sum += n[i];
    }
    return sum % 10;
}
void HashTable::insert1(string n)
{
    int index = hash1(n);

    if(v[index]->x == "empty")
    {
        cout << n << endl;
        v[index]->x = n;

    }else{
        Node* tmp = v[index];
        Node* p = new Node;
        p->x = n;
        p->next = NULL;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = p;
    }
}
bool HashTable::search1(string n)
{
    int index = hash1(n);
    Node* tmp = v[index];
    while(tmp != NULL)
    {
        if(tmp->x == n)
        {
            cout<< n << endl;
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}
int main()
{
    HashTable ob;
    ob.insert1("dipty");
    ob.insert1("ppp");
    cout<< ob.search1("lop") << endl;
    cout<< ob.search1("dipty") << endl;
    return 0;
}
