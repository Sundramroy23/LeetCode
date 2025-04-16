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

    ListNode* middle(ListNode* head){
        ListNode*prev = nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        return prev;

    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head ==nullptr || head->next ==nullptr) return nullptr;
        ListNode* prev = middle(head);
        ListNode* temp = prev->next->next;
        delete(prev->next);
        prev->next = temp;
        return head;

    }
};