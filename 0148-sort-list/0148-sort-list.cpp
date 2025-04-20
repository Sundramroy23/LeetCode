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
    ListNode* mergeLL(ListNode* first,ListNode* second){
        ListNode* newHead = new ListNode(-1);
        ListNode* curr = newHead;
        while(first!= nullptr && second!=nullptr){
            if(first->val>=second->val){
             curr->next = second;
             second = second->next;   
            }
            else{
                curr->next = first;
                first = first->next;
            }
            curr = curr->next;
        }
        while(first){
            curr->next = first;
            first = first->next;
            curr = curr->next;
        }
        while(second){
            curr->next = second;
            second = second->next;
            curr = curr->next;
        }
        return newHead->next;

    }
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* middle = findMiddle(head);
        ListNode* firstHead = head;ListNode* secondHead = middle->next;
        middle->next = nullptr;
        firstHead = sortList(firstHead);
        secondHead = sortList(secondHead);
        return mergeLL(firstHead,secondHead);

        
    }
};