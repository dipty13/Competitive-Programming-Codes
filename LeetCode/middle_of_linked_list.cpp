#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode();
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* middleNode(ListNode* head)
{
    ListNode* k = head;
    ListNode* m = head;
    while(k != NULL && k->next != NULL)
    {
        m = m->next;
        k = k->next->next;
    }
    return m;
}
void push(struct ListNode** head_ref, int new_data)
{
    struct ListNode* new_node =
        (struct ListNode*) malloc(sizeof(struct ListNode));

    new_node->val = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void printList(struct ListNode *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->val);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct ListNode* head = NULL;
    int i;

    for (i=5; i>0; i--)
    {
        push(&head, i);
        printList(head);
        ListNode* l = middleNode(head);
        cout << l->val<< endl;
    }
    return 0;
}
