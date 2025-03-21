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
        // int intersected = 0;
        ListNode * temp = headB; 
        while(headA!=nullptr){
            headB = temp;
            while(headB!=nullptr){
                if(headB == headA){
                    // intersected = headB->val;
                    return headA;
                }
                headB = headB->next;
            }
            headA = headA->next;
        }
        return nullptr;
    }
};