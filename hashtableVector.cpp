#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    string data;
    Node* next;
    Node()
    {
        data = "empty";
        next = NULL;
    }
};
int hashValue(string str)
{
    int sum = 0;
    for(int i = 0; i < str.size(); i++)
    {
        sum += str[i];
    }
    return sum % 10;
}
 vector<Node*> v[10];
Node* head;

void insert(string str)
{
    int index = hashValue(str);
    if(v[index][0] == "empty")
    {
        v[index]->data = str;
    }else{
        Node* tmp = v[index];
        Node* x = new Node;
        x->data = str;
        x->next = NULL;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = x;
    }
}
int main()
{
    int i, j;
    insert("dipty");
    insert("llla");
    return 0;
}
