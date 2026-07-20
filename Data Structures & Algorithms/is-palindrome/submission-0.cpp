class Solution {
   public:
    bool isPalindrome(string s) {
        string cleaned;
        for (char ch : s) {
            if (isalnum(ch)) {
                cleaned += tolower(ch);
            }
        }
        int l = 0, r = cleaned.size() - 1;
        while (l < r) {
            if (cleaned[l] != cleaned[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
