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
    ListNode* deleteDuplicates(ListNode* head) {
     if(head==nullptr) return nullptr;
     ListNode* currPtr = head;
     ListNode* nxtPtr = head->next;

     while(nxtPtr!=nullptr){
        if(currPtr->val == nxtPtr->val){
            ListNode* temp = nxtPtr;
            nxtPtr = nxtPtr->next;
            currPtr->next = nxtPtr;
            delete temp;
        }
        else{
            currPtr = nxtPtr;
            nxtPtr = nxtPtr->next;

        }
     }
        return head;
    }
};