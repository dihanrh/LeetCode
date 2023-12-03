//https://leetcode.com/problems/search-a-2d-matrix/description/
//Search a 2D Matrix

// TC : O(log(n*m)) where n is size of matrix and m is size of first element in matrix.
// SC : O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        int n = matrix.size();
        int L = 0;
        int R = m*n-1;
        int M = 0;

        while(L <= R)
        {
            M = L+(R-L)/2;
            int i = M/m;
            int j = (M%m);
            if(matrix[i][j] < target)
            {
                L = M+1;
            }
            else if(matrix[i][j] > target)
            {
                R = M-1;
            }
            else
            {
                return true;
            }
        }
        return false ;
    }
};