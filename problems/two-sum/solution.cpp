class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> value_index_map;
        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if (value_index_map.find(diff) != value_index_map.end()) {
                return {value_index_map[diff],i};
            }
            value_index_map.insert({nums[i],i});
        }
        return {};
        }
    };