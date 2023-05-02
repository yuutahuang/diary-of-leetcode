///9. Palindrome Number
/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; ///�ˬd��J����ƬO�_���t��, �p�G�O�t��,����reture false
        string s = to_string(x);
        int x_len = s.length() - 1;
        for (int i = 0; i <= x_len / 2; i++) {
            if (s[i] != s[x_len-i]) {
                return false;
            }
        }
        return true;
    }
};

