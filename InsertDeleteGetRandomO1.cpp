//https://leetcode.com/problems/insert-delete-getrandom-o1/description/
//Insert Delete GetRandom O(1)

class RandomizedSet {
public:
    vector<int> randSet;
    unordered_map<int,int> valIdxMap;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
      //  randSet.push_back(val) ; //O(n)

      if(valIdxMap.count(val)) return false;
      valIdxMap[val] = randSet.size();
      randSet.push_back(val);
      return true;
        
    }
    
    bool remove(int val) {
        if(valIdxMap.count(val) == 0) return false;
        int vIdx = valIdxMap[val];
        int lastIdx =  randSet.size() - 1;
        swap(randSet[vIdx], randSet[lastIdx]);
        randSet.pop_back();
        valIdxMap[randSet[vIdx]] = vIdx;
        valIdxMap.erase(val);
        return true;
    }
    
    int getRandom() {
        int randomIdx = rand() % randSet.size();
        return randSet[randomIdx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */