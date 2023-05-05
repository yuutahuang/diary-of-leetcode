///1456. Maximum Number of Vowels in a Substring of Given Length
/*
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

Example 1:
Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
*/
class Solution {
public:
    int maxVowels(string s, int k) {
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int maxCount = 0, count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                count++;
            }
            if (i >= k) {
                if (find(vowels.begin(), vowels.end(), s[i - k]) != vowels.end()) {
                    count--;
                }
            }
            maxCount = max(maxCount, count);
            if (maxCount == k) {
                break;
            }
        }
        return maxCount;
    }
};
