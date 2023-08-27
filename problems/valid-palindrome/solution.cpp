class Solution {
public:
    bool isPalindrome(string s) {
        string text = "";
        string c;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                c = tolower(s[i]);
                text.append(c);
            }
        }
        int left = 0;
        int right = text.size()-1;
        while (left < right) {
            if (text[left] != text[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};