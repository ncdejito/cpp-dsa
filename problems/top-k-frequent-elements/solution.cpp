class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> nums_in_increasing_frequency;
        vector<int> most_frequent;
        int element;

        // count frequency of each element - save to a dict
        unordered_map<int,int> counts;
        for (int i=0; i<nums.size();++i){
            counts[nums[i]]=0;
        }
        for (int i=0; i<nums.size();++i){
            ++counts[nums[i]];
        }

        // order dict
        // Declare a multimap
        multimap<int, int> MM;
        // Insert every (key-value) pairs as (value-key)
        for (auto& it : counts) {
            MM.insert({ it.second, it.first });
        }
        for (auto& it : MM) {
            nums_in_increasing_frequency.push_back(it.second);
        }

        // return first k items of dict
        for (;k>0;--k){
            element = nums_in_increasing_frequency.back();
            nums_in_increasing_frequency.pop_back();
            most_frequent.push_back(element);
        }
        return most_frequent;
    }
};