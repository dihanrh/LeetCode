//https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
//Remove Nth Node From End of List
// TC : O(n)
// SC : O(1)

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        auto slow = new ListNode(0,head);
        auto cslow = slow;
        auto fast = slow;

        while(n--)
        {
            fast = fast -> next;
        }
        while(fast and fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        auto remove_node = slow -> next;
        slow -> next = slow -> next -> next;

        delete(remove_node);
        return cslow -> next ;
    }
};