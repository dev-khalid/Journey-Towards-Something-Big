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
        next = NULL; //TODO : make this like as this.next = null;
    }

};

/*
Need to code followings:
    1.Reverse a linked list
    2.Merge two sorted list
    3.Merge k sorted list using Min Heap & Linked List
    4.Hare & Tortoise method (slow fast pointer - mid node of a ll)
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
Node* reverseLLIterative(Node * head) {
    Node * prev = NULL;
    Node * curr = head;
    Node * temp;
    while(true) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        if(temp==NULL) break;
        curr = temp;


   }
   return curr;
}

//need to implement k sorted list & merge two sorted list
int main()
{
    Node* head = NULL; //pointing this to nothing ...
    insertAtHead(head,5);
    insertAtHead(head,10);
    insertAtHead(head,50);
    insertAtHead(head,45);
    head = reverseLLIterative(head);
    printLL(head);
}
