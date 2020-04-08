#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode();
     ListNode(int x) : val(x), next(NULL) {}
  };

ListNode* middleNode(ListNode* head) {
   // cout << head->val << endl;
        ListNode* k = head;
        ListNode* m = head;
        while(k != NULL && k->next != NULL){
            m = m->next;
            k = k->next->next;
            cout << m->val << " " << k->val << endl;
        }
        return m;
}
int main()
{
    ListNode* l = (struct ListNode *)malloc(sizeof(struct ListNode));
    ListNode* x= (struct ListNode *)malloc(sizeof(struct ListNode));
    l = new ListNode(1);
    x = l;
    l->next = new ListNode(2);
    l->next = new ListNode(3);
    ListNode* head = middleNode(x);
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
