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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        if(!a || !b) return NULL;
        while(a!=b){
            if(a){
                a=a->next;
            }else a=headB;
            if(b){
                b=b->next;
            }else b=headA;
        }
        return a;
    }
};