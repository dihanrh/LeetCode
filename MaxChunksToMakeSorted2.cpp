//https://leetcode.com/problems/max-chunks-to-make-sorted-ii/description/
//Max Chunks To Make Sorted II

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {

        stack<int> chunks;

        for(int i = 0; i < arr.size(); i++)
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