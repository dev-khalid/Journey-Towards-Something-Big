/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int nodeCount(ListNode *head) {
        int cnt = 0;
        while(head) {
            head=head->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* racer(ListNode *head,int t) {
        if(t==0)  {
            return NULL;
        }
        int cnt = 1;
        while(cnt!=t) {
            head = head->next;
            cnt++;
        }
        return head;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int n = nodeCount(head);
        if(n-k+1==k) {
            //they are pointing to the same element .
            return head;
        }
        ListNode *p1 = racer(head,k-1);
        ListNode *p2 = racer(head,n-k);
        ListNode *n1 = racer(head,k);
        ListNode *n2 = racer(head,n-k+1);

        if(p1==NULL) {

            p2->next = n1;
            swap(n1->next,n2->next);
            return n2;
        }
        if(p2==NULL) {
            p1->next = n2;
            swap(n1->next,n2->next);
            return n1;
        }
        p1->next = n2;
        p2->next = n1;
        swap(n1->next,n2->next);

        return head;
    }
};
