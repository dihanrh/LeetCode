//https://leetcode.com/problems/linked-list-cycle/description/
//Linked List Cycle

// TC : O(n)
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
    bool hasCycle(ListNode *head) {
        bool seen = false;
        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast and fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast and (slow and fast))
            {
                seen =  true;
                break;
            }
            
        }
        return seen;
    }
};