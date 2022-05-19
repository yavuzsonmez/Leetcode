/* 9. Palindrome Number */

class Solution {
public:
    bool isPalindrome(int x) {

        std::string s = std::to_string(x);
        unsigned int length = s.size();
        unsigned int i = 0;
        unsigned int j = length - 1;

        while (i != j && i < length && j > 0)
        {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }
};