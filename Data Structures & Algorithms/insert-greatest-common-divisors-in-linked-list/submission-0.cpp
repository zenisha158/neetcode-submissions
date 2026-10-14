#include <numeric>

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head) return nullptr;

        ListNode* curr = head;

        while (curr && curr->next) {
            int g = std::gcd(curr->val, curr->next->val);

            ListNode* newNode = new ListNode(g);
            newNode->next = curr->next;
            curr->next = newNode;

            curr = newNode->next; 
        }

        return head;
    }
};
