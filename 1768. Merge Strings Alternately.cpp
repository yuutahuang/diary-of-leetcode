///1768. Merge Strings Alternately
/*
You are given two strings word1 and word2.
Merge the strings by adding letters in alternating order, starting with word1.
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.

Example 1:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int n1 = word1.length();
        int n2 = word2.length();
        int n3 = (word1+word2).length();
        for (int i=0; i<n3; i++){
            if (i<n1) result += word1[i];
            if (i<n2) result += word2[i];
        }
        return result;
    }
};
