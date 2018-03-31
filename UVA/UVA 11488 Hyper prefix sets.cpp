#include<bits/stdc++.h>
using namespace std;
struct node{
   // static int gd;

     int count;
  // static int ans;
    bool x;
    bool endmark;
    node* next[3];
    node()
    {

        //ans=0;
        count =0;
        x=false;
        endmark = false;
        for(int i=0;i<2;i++)
        {
            next[i]=NULL;
        }
    }

} * root;

int ans;//=-1;
void insert(string str,int len)
{
    //node::ans=-1;
    node* curr = root;
    //curr->count=0;
    for(int i=0;i<len;i++)
    {
        //curr->count=0;
        int id = str[i]-48;
        if(curr->next[id] == NULL)
        {
            curr->next[id]=new node();
        }
        curr = curr->next[id];
        curr->count++;
 ans = max(ans,((i+1) * curr->count));
    }


    curr->endmark = 1;
}
/*int search(string str,int len)
{
    node* curr = root;
    for(int i=0;i<len;i++)
    {
        int id = str[i]-48;
        if(curr->next[id] == NULL)
        {
            return -1;
        }
        curr = curr->next[id];
        //curr->count++;
    }
    return curr->ans;//curr->x;
}*/
void del(node* curr)
{
    for(int i=0;i<2;i++)
    {
        if(curr->next[i])
        {
            del(curr->next[i]);
        }
    }
    delete(curr);
}
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        root = new node();
        int c=0;
        cin>>n;
        string str;
        vector<string> vec;
        ans=0;
        for(i=0;i<n;i++)
        {
            cin>>str;
            insert(str,str.length());
            vec.push_back(str);

        }
       /* for(i=0;i<n;i++)
        {
            if(search(vec[i],vec[i].length())!=-1)
            {
                c=search(vec[i],vec[i].length());
            }
        }*/
        cout<<ans<<endl;
        del(root);
    }
}
