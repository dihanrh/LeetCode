//https://leetcode.com/problems/add-two-numbers/
//Add Two Numbers

// TC : O(max(l1,l2))
// SC : O(max(l1,l2))

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum_node = new ListNode(0);
        ListNode* current = sum_node;
        int sum = 0;
        int remainder = 0;

        while(l1 or l2 or remainder)
        {
            sum = 0;
            sum = remainder + (l1 ? l1->val :0) + (l2 ? l2 ->val :0);
            remainder = sum/10;
            sum %= 10;
            current -> next = new ListNode(sum);
            current = current -> next;
            if(l1) l1 = l1 -> next;
            if(l2) l2 = l2 -> next;
        }
     

        return sum_node -> next;
    }
};