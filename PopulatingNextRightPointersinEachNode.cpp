//https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/
//Populating Next Right Pointers in Each Node

// TC : O(n) 
// n  : number of node
// SC : O(1)

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
            if(root == NULL) return NULL;
            Node* current = root;
        while(current -> left != NULL)
        {
            Node* current_pos = current;
            while(current)
            {
                current->left->next = current->right;
                if(current -> next)
                {
                    current->right->next = current->next->left;
                }
                current = current->next;
            }
            current = current_pos -> left;
        }
        return root;
    }
};