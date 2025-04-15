class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* oddH = head;
        ListNode* odd = oddH;
        ListNode* evenH = head->next;
        ListNode* even = evenH;

        while (odd && odd->next && even && even->next) {
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = even->next->next;
            even = even->next;
        }

        odd->next = evenH;
        return oddH;
    }
};
