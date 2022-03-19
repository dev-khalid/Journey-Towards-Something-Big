#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next; //pointer to next node

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

};

/*
Need to code followings:
    2.Merge two sorted list
    3.Merge k sorted list using Min Heap & Linked List
    5.Reverse K Groups
    6.Copy list with Random Pointers
*/

void insertAtHead (Node * &head,int data)
{
    if(head == NULL)
    {
        head = new Node(data);
        return;
    }
    //now create a new node and point the head to it
    Node * n = new Node(data);
    n->next = head; //another approach for this one is *n.next
    head = n;
}
void printLL(Node * head)
{
    while(head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
}
Node* reverseLL(Node * head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    };
    Node *sHead = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return sHead;
}
Node* reverseLLIterative(Node * head)
{
    Node * prev = NULL;
    Node * curr = head;
    Node * temp;
    while(true)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        if(temp==NULL) break;
        curr = temp;


    }
    return curr;
}
//slow fast pointer - mid of a node
Node* midOfLL(Node* s,Node * f)
{
    if(f->next == NULL || f->next->next==NULL || f == NULL)

        return s;

    return midOfLL(s->next,f->next->next);
}

//merge two sorted list
Node * mergeHelper(Node * p1,Node * p2)
{
    if(p1==NULL || p2==NULL)
    {
        return p1==NULL ? p2 : p1;
    }

    Node * d = NULL;
    Node * s = NULL;
    if(p2->data > p1->data)
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
        if(p2->data > p1->data)
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
Node * mergeTwoSortedLL(Node * head)
{
    //now need to divide them in two parts ...
    //Node * mid = midOfLL(head,head);

    return NULL;

}

//need to implement k sorted list & merge two sorted list
int main()
{
    Node* head1 = NULL;
    insertAtHead(head1,50);
    insertAtHead(head1,10);
    insertAtHead(head1,10);
    insertAtHead(head1,5);
    insertAtHead(head1,5);
    insertAtHead(head1,5);
    insertAtHead(head1,5);
    insertAtHead(head1,5);
    Node * head2 = NULL;
    insertAtHead(head2,75);
    insertAtHead(head2,55);
    insertAtHead(head2,45);
    insertAtHead(head2,45);
    insertAtHead(head2,45);
    Node * h = mergeHelper(head1,head2);
    printLL(h);
}
