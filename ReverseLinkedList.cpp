//https://leetcode.com/problems/reverse-linked-list/description/
//Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
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
};