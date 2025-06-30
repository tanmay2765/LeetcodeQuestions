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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* s=head;
        ListNode* f=head;
        if (!head || !head->next || k == 0) return head;
        int len = 1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            len++;
        }

        k = k % len;
        if (k == 0) return head;
        
        for(int i=0;i<k;i++){
            f=f->next;
        }
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        f->next=head;
        head=s->next;
        s->next=nullptr;
        return head;
    }
};