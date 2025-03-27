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
    ListNode* middleNode(ListNode* head) {
        ListNode * prev;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast->next!=nullptr){
            prev = slow;
            slow = slow->next;
            if(fast->next->next == nullptr) break;
            fast = fast->next->next;
        }
        return slow;
        
    }
};