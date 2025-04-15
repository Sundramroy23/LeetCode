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
    ListNode *detectCycle(ListNode *head) {

        unordered_set<ListNode*> mp;
        ListNode* curr = head;
        while(curr!=nullptr){
            if(mp.find(curr)==mp.end()){
                mp.insert(curr);
            }
            else{
                return curr;
            }
            curr = curr->next;
        }
        return nullptr;
    }
};