//https://leetcode.com/problems/lru-cache/description/
//LRU Cache

// TC : o(1)
// SC : O(|Capacity|)

class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(key_val.count(key) == 0)
        {
            return -1;
        }
        updateLRU(key);
        return key_val[key];
    }
    
    void put(int key, int value) {
        if(key_val.count(key) == 0 and lru.size() == cap)
        {
            evict();
        }
        updateLRU(key);
        key_val[key] = value;
    }
private:
    int cap;
    list<int> lru;
    unordered_map<int, list<int> :: iterator> key_loc;
    unordered_map<int, int> key_val;

    void updateLRU(int key)
    {
        if(key_val.count(key))
        {
            lru.erase(key_loc[key]);
        }
        lru.push_front(key);
        key_loc[key] = lru.begin();
    }
    void evict()
    {
        int dump_key = lru.back();
        key_val.erase(dump_key);
        key_loc.erase(dump_key);
        lru.pop_back();
    }

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */