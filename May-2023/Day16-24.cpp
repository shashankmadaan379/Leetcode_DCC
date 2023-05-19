//Swap Nodes in Pairs

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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode * a = NULL;
        auto b = head;
        auto c = head->next;
        auto new_head = c;
        while (b && c) {
        	if (a) a->next = c;
        	b->next = c->next;
        	c->next = b;
        	a = b;
        	b = b->next;
        	if (b) c = b->next;
        }
        return new_head;
        
    }
};
