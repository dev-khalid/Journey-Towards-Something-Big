#include<bits/stdc++.h>
using namespace std;

class ListNode
{

public:
    int val;
    ListNode * next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

void insertAtHead(ListNode * &head,int val)
{
    if(head==NULL)
    {
        head = new ListNode(val);
        return;
    }
    ListNode * tmp = new ListNode(val);
    tmp->next = head;
    head = tmp;
}

void printLL(ListNode * head)
{
    while(head)
    {
        cout << head-> val << " ";
        head = head->next;
    }
    cout << endl;
}


ListNode* midOfLL(ListNode* s,ListNode * f)
{
    if(f->next == NULL || f->next->next==NULL || f == NULL)

        return s;

    return midOfLL(s->next,f->next->next);
}

ListNode * mergeHelper(ListNode * p1,ListNode * p2)
{
    if(p1==NULL || p2==NULL)
    {
        return p1==NULL ? p2 : p1;
    }

    ListNode * d = NULL;
    ListNode * s = NULL;
    if(p2->val > p1->val)
    {
        d = p1;
        p1=p1->next;
    }
    else
    {
        d = p2;
        p2=p2->next;
    }
    s = d;
    while(1)
    {
        if(p1==NULL)
        {
            d->next = p2;
            break;
        }
        if(p2==NULL)
        {
            d->next = p1;
            break;
        }
        if(p2->val > p1->val)
        {
            d->next = p1;
            d = p1;
            p1=p1->next;
        }
        else
        {
            d->next = p2;
            d = p2;
            p2=p2->next;
        }

    }
    return s;
}
ListNode * mergeRec(vector<ListNode*> & lists , int s,int e) {
    if(s==e) {
        return lists[s];
    }
    int mid = (s+e)/2;
    ListNode * x = mergeRec(lists,s,mid);
    ListNode * y = mergeRec(lists,mid+1,e);
    return mergeHelper(x,y);
}
ListNode* mergeKLists(vector<ListNode*>& lists)
{
    int k = lists.size();
    if(k==0) {
        return NULL;
    }
    return mergeRec(lists,0,k-1);
}

int main()
{
    ListNode * head = NULL;
    ListNode* head1 = NULL;
    insertAtHead(head1,5);
    insertAtHead(head1,-1);

    ListNode * head2 = NULL;
    insertAtHead(head2,10);
    insertAtHead(head2,6);
    ListNode * head3 = NULL;

    vector<ListNode*> lists{head,head1,head3,head2};
    ListNode * res = mergeKLists(lists);
    printLL(res);
}
