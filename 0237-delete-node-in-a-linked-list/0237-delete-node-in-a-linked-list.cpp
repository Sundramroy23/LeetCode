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
    void deleteNode(ListNode* node) {
        if(node == nullptr) return;
        // int tmpVal;
        ListNode* prev = nullptr;
        while(node->next!=nullptr){
            prev = node;
            node->val = node->next->val ;
            node = node->next;

        }
        prev->next= nullptr;

    }
};