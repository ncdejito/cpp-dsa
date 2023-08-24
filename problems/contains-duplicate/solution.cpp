class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> my_set;
        for (int i = 0; i < nums.size(); ++i) {
            // set insertion second says if element was inserted or not (element already exists)
            if(my_set.insert(nums[i]).second == false) {
                return true; 
            }
        }
        return false;
    }
};