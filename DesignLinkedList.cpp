//https://leetcode.com/problems/design-linked-list/description/
//Design Linked List

// TC : O (len)
// SC : O (1)

const int Dummy_val = 0;

class MyLinkedList {
public:
    class ListNode{
        public : 
        int val;
        ListNode *next;

        ListNode()
        {
            int val;
            next = nullptr;
        }
        ListNode(int _val)
        {
            val = _val;
            next = nullptr;
        }
        ListNode(int _val, ListNode *_next)
        {
            val = _val;
            next = _next;
        }
    };
    int len;
    ListNode *dHead;
    MyLinkedList() {
        len = 0;
        dHead = new ListNode(Dummy_val);
        
    }
    
    int get(int index) {
    	// TC : O( index )
        if(index < 0 or index >= len ) return -1;

        ListNode *cHead = dHead -> next;
        while(index --)
        {
            cHead = cHead -> next;
        }

        return cHead -> val;

    }
    
    void addAtHead(int val) {
    	// TC : O(1)
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
    	// TC : O(len)
        addAtIndex(len,val);
    }
    
    void addAtIndex(int index, int val) {
    	
    	// TC : O(len)
        if(index > len) return;

        ListNode *cHead = dHead;
        while(index --)
        {
            cHead = cHead -> next ;
        }
        ListNode *block_add = new ListNode(val);
        ListNode *block_next  = cHead -> next;

        cHead -> next = block_add ;
        block_add -> next =  block_next;
        len ++;
        
    }
    
    void deleteAtIndex(int index) {
    	// TC : O(len)
        if(index < 0 or index >= len ) return;
        ListNode *cHead = dHead;

        while(index --)
        {
            cHead = cHead -> next;
        }

        ListNode *removeIndex = cHead -> next;
        cHead -> next = cHead -> next -> next ;

        delete(removeIndex);
        len --;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */