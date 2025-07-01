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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* c=head->next;
        ListNode* temp=c->next;
        ListNode* x=head;
        x->next = NULL;
        while(temp){
            c->next=x;
            x=c;
            c=temp;
            temp=temp->next;
        }
        c->next=x;
        head=c;
        return head;
    }
};