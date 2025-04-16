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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=n;i>0;i--){
            fast = fast->next;
        }
        while(fast!=nullptr && fast->next!=nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        if(fast==nullptr) {head = head->next;return head;}
        ListNode* temp = slow->next->next;
        delete slow->next;
        slow->next = temp;
        return head;
    }
};