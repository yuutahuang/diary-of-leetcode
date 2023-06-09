///338. Counting Bits
/*
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n),
ans[i] is the number of 1's in the binary representation of i.

Example 1:
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
*/
class Solution {
public:
    vector <int> countBits(int num) {
        vector<int> res(num);
        res.push_back(0);  // for num = 0
        if (num == 0) return res;

        for (int i = 1; i <= num; i++) {
            if (i % 2 == 0)
                res[i] = res[i / 2];
            else
                res[i] = res[i - 1] + 1;
        }
        return res;
    }
};
