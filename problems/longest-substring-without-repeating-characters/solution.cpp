class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> chars;
        int max_len = 0;
        int i = 0;
        int j = 0;
        while (j < s.size())
        {
            while (chars.find(s[j]) != chars.end())
            {
                chars.erase(s[i]);
                ++i;
            }
            max_len = max(max_len, j - i + 1);
            chars.insert(s[j]);
            ++j;
        }
        return max_len;
    }
};