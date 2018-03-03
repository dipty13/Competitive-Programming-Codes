#include<bits/stdc++.h>
using namespace std;

struct node{
    bool endmark;
    node* next[26+1];

    //when main we'll call new node() then all the variable we'll be set as null
    node()
    {
        endmark = false;
        for(int i=0; i<26; i++)
        {
            next[i] = NULL;

        }
    }

}*root;

void insert(string str, int len)
{
    /*because we have to create new edge from root,
    so initially we'll assign curr with root*/
    node* curr = root;

    for(int i=0;i<len;i++)
    {
        int id = str[i] - 'a';
        /*checking if the character already exists in the tree or not
            if it does not then will create a new node for it
        */
        if(curr->next[id]==NULL)
        {
            curr->next[id] = new node();
        }
        //from this edge we'll go to next node
        curr = curr->next[id];
    }
    //we'll set endmark as true on the last node
    curr->endmark = true;
}

bool search(string str, int len)
{
    /*because we have to start search from the root,
    so initially we'll assign curr with root*/
    node* curr = root;

    for(int i=0;i<len;i++)
    {
        int id = str[i] - 'a';
        /*checking if the character already exists in the tree or not
            if it does not then will return false
        */
        if(curr->next[id]==NULL)
        {
            return false;
        }
        //from this edge we'll go to next node
        curr = curr->next[id];
    }
    //we'll return endmark, if the the endmark is true then the word exist in the tree
    return curr->endmark;
}
void del(node* cur)
{
    for(int i=0;i<26;i++)
    {
        if(cur->next[i])
        {
            del(cur->next[i]);
        }
    }
    delete(cur);
}
int main()
{
    puts("ENTER NUMBER OF WORDS");

    /*when this line we'll be executed a new node
     we'll be created and get assigned into the memory address which is pointed by root
     */
    root = new node();
    int num_word;
    cin>>num_word;
    for(int i=0;i<num_word;i++)
    {
        string x;
        cin>>x;
        insert(x,x.size());
    }
    puts("ENTER NUMBER OF QUERY");
    int query;
    cin >> query;
    for (int i = 1; i <= query; i++) {
        string str;
        cin>>str;
        if (search(str, str.size()))
            puts("FOUND");
        else
            puts("NOT FOUND");
    }
    del(root);
    return 0;
}
