//https://leetcode.com/problems/max-chunks-to-make-sorted/description/
//Max Chunks To Make Sorted

//observation
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxi = arr[0];
        int count = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            maxi = max(maxi, arr[i]);

            if(i == maxi)
            {
                count ++;
            }
            
        }

        return count;
    }
};

// stack
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> chunks;
        // 1 0 3 4 2 5
        //3
        for( int i = 0; i < arr.size(); i++)
        {
            if(!chunks.empty() and arr[i] < chunks.top())
            {
                int top = chunks.top();
                while(!chunks.empty() and arr[i] < chunks.top())
                {
                    chunks.pop();
                }
                chunks.push(top);
            }
            else 
            {
                chunks.push(arr[i]);
            }
        }

        return chunks.size();
    }

};
