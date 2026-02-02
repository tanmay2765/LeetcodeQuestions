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
        while(f && f->next){
            s=s->next;
            f=f->next->next;
            if(s==f) break;
        }
        if(!f || !f->next) return nullptr;
        while(e!=s){
            e=e->next;
            s=s->next;
        }return e;
    }
};