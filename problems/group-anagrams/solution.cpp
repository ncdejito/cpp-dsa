class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> anagrams;
    for (int i = 0; i < strs.size(); i++) {
        string counts_text = count_chars(strs[i]);
        anagrams[counts_text].push_back(strs[i]);
    }
    vector<vector<string>> grouped_anagrams;
    for (auto it = anagrams.begin(); it != anagrams.end(); it++) {
        grouped_anagrams.push_back(it->second);
    }
    return grouped_anagrams;
    }
private:
    string count_chars(string str) {
        vector<int> counts_per_letter(26);
        for (int j = 0; j < str.size(); j++) {
            counts_per_letter[str[j] - 'a']++;
        }
        string counts_as_text = "";
        for (int k = 0; k < 26; k++) {
            counts_as_text.append(to_string(counts_per_letter[k]));
            counts_as_text.append(";");            
        }
        return counts_as_text;
    }
};