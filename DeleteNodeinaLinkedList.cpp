//https://leetcode.com/problems/delete-node-in-a-linked-list/description/
//Delete Node in a Linked List

// TC : O(1)
// SC : O(1)

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
        auto remove_node = node -> next;
        node -> val = node -> next -> val;
        node -> next = node -> next -> next;
        delete(remove_node);
    }
};