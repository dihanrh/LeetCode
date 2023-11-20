//https://leetcode.com/problems/design-hashmap/description/
//Design HashMap

// TC : O(1) in case of no collision.
// SC : O(|CAPACITY|+ |key|)

class MyHashMap {
private:
   class Node {
       public:
         int key, value;
         Node* next;
         Node (int k, int v, Node* nxt)
         {
             key = k;
             value = v;
             next = nxt;
         }
   };
    int calculateHash(int key)
    {
       return((key * BASE)+ OFSET) % CAPACITY;
    }
public:
    const static int CAPACITY = 128;
    Node* _lists[CAPACITY] = {};
    const static int BASE = 1007;
    const static int OFSET = 1997;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        remove(key);
        int _hash = calculateHash(key);
        auto node = new Node(key,value,_lists[_hash]);
        _lists[_hash] = node;
    }
    
    int get(int key) {
        int _hash = calculateHash(key);
        auto node = _lists[_hash];
        while(node)
        {
            if(node -> key == key)
            {
                return node -> value;
            }
            node = node -> next;
        }
        return -1;
    }
    
    void remove(int key) {
        int _hash = calculateHash(key);
        auto node = _lists[_hash];

        if(node == nullptr)
        {
            return;
        }
        if(node -> key == key)
        {
            _lists[_hash] = node -> next;
            delete node;
            return;
        }
        while(node and node -> next)
        {
            if(node -> next -> key == key)
            {
                auto tmp = node -> next;
                node -> next = tmp -> next;
                delete tmp;
            }
            node = node -> next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */