/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* s=head;
        ListNode* f=head;
        ListNode* e=head;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(s==f) break;
        }
        if (f == NULL || f->next == NULL) return 0;
        f=f->next;
        while(e!=s){
            e=e->next;
            s=s->next;
        }
        return e;
    }
};