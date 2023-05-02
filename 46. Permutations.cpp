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
        sort(nums.begin(), nums.end()); //�N�ƲձƧǡA�H�ͦ��Ĥ@�ӱƦC
        do {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end())); //�ͦ��U�@�ӱƦC

        return result;
    }
};

//next_permutation�|�ϥΤw�g�ƧǦn�����(�Ѥp��j)�A�A���ͤU�@�ո��
//�ҥH�bnext_permutation�e�n����sort()�i��@��Ƨ�
//�ϥ�do-while�H�T�O�{���|������@��
