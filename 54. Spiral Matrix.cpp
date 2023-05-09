///54. Spiral Matrix
/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = n-1, top = 0, bottom = m-1;
        while (left<=right && top<=bottom){
            for (int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++; //往下一排
            for (int i=top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--; //往左一排

            if(top<=bottom){
                for (int i=right; i>=left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; //往上一排
            }
            if(left<=right){
                for (int i=bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++; //往右一排
            }
        }
        return ans;
    }
};
