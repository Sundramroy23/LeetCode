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
    ListNode* mid(ListNode* head){
        ListNode* fast = head;
        while(fast && (fast->next)){
            head = head->next;
            fast = fast->next->next;
        }
        return head;
    }
    ListNode* reverse(ListNode* curr){
        ListNode* prev = nullptr;
        while(curr!=nullptr){
            ListNode * next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;

    }

public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)return true;
        ListNode* middle = mid(head); 
        ListNode* right = reverse(middle);
        ListNode* left = head;
        
        while(right){
            if(left->val != right->val) return false;
            right = right->next;
            left = left->next;
        } 
        return true;
    }
};