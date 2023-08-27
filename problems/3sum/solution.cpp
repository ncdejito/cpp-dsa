class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                int three_sum = nums[i] + nums[l] + nums[r];
                if (three_sum < 0) {
                    l++;
                }
                else if (three_sum > 0) {
                    r--;
                }
                else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    while (nums[l] == nums[l-1] && l < r) {
                        l++;
                    }
                }
            }
        }

        return res;
    }
};