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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* p=l1;
        ListNode* q=l2;
        ListNode* c=head;
        int cc=0;
        while(p || q || cc){
            int s=((p != NULL) ? p->val : 0)+((q != NULL) ? q->val : 0) + cc;
            cc=s/10;
            c->next=new ListNode(s%10);
            c=c->next;
            if(p) p=p->next;
            if(q) q=q->next;
        }
        if (cc > 0) c->next = new ListNode(cc);
        return head->next;
    }
};