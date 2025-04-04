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
        ListNode* l1 = headA;
        ListNode * l2 = headB;
        if(headA==nullptr || headB==nullptr) return nullptr;

        while(l1 != l2){
            l1 = (l1==nullptr)?headA:l1->next;
            l2 = (l2 == nullptr)?headB:l2->next;
            if(l1==l2) return l1;
        }
        return l1;
    }
};