//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/
//Maximum Twin Sum of a Linked List
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
    
ListNode* reverseNode(ListNode* head)
{
    ListNode* curr = head;
    ListNode* prv = nullptr;
    while(curr)
    {
        ListNode* nxt = curr -> next;
        curr -> next = prv;
        prv = curr;
        curr = nxt;

    }
    return prv;
}
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast and fast -> next)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        ListNode* mid_head = reverseNode(slow);
        ListNode* front_head = head;
        int maxi = 0;
        while(mid_head)
        {
            maxi = max(maxi, front_head -> val + mid_head ->val);
            front_head = front_head -> next;
            mid_head = mid_head -> next;
        }
        // the ListNode can be reversed to roll back to previous
        return maxi;
    }
};