///46. Permutations
/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end()); //將數組排序，以生成第一個排列
        do {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end())); //生成下一個排列

        return result;
    }
};

//next_permutation會使用已經排序好的資料(由小到大)，再產生下一組資料
//所以在next_permutation前要先用sort()進行一般排序
//使用do-while以確保程式會先執行一次
