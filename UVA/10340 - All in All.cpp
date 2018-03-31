#include<bits/stdc++.h>
using namespace std;
/*struct node{
    bool endmark;
    bool x;
    node* next[26+1];
    node(){
        x=false;
        endmark=false;
         for(int i=0;i<26;i++)
       {
          next[i]=NULL;
       }
    }
} *root;
void insert(string str, int len)
{
    node* curr = root;

    for(int i=0;i<len;i++)
    {
        // cout<<"dkf";
        int id = tolower(str[i])-'a';

        if(curr->next[id] == NULL)
        {
            curr->next[id] = new node();
            curr->x=true;
        }
        curr=curr->next[id];

    }
    curr->endmark=1;
}
bool search(char a,string str, int len)
{
    node* curr = root;
    for(int i=len;i<str.size();i++)
    {
        int id = tolower(a)-'a';
        if(curr->next[id]==NULL)
        {
            //cout<<str[i]<<endl;
            return false;
        }
        else {
            return true;
        }
       curr= curr->next[id];
       //curr->x=true;
    }
    return curr->x;

}
void del(node* curr)
{
    for (int i = 0; i < 26; i++)
        if (curr->next[i])
            del(curr->next[i]);

    delete (curr);
}*/
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        //root= new node();
        if(cin.eof())
        {
            break;
        }
        int c=0,x=0;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=x;j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                {
                    //cout<<s1[j]<<" "<<j<<" ";
                    c++;
                    x=j+1;
                    break;
                }
            }
        }
        if(c==s1.size())
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        //del(root);
    }
    return 0;
}
