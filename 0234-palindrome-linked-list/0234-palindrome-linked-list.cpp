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

    ListNode* findMid(ListNode* head){
        if(head==nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            temp = temp->next;
            fast = fast->next->next;
        }
        return temp;
    }

    ListNode* reverseLL(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* front = nullptr;
        while(curr!=nullptr){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        ListNode* middle = findMid(head);
        ListNode* revHead = reverseLL(middle);
        ListNode* frontHead = head;
        while(revHead!=nullptr){
            if(revHead->val != frontHead->val) return false;
            revHead = revHead->next;
            frontHead = frontHead->next;
        }

        return true;

    }
};