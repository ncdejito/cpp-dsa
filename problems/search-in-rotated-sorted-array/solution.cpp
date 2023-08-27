class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while (l <= r) {
            int m = l + (r-l)/2;
            if (nums[m] == target) {
                return m;
            }
            // if m is in left sorted
            if (nums[l] <= nums[m]) {
                // search right
                if (target > nums[m]) {
                    l = m + 1;
                }
                else if (target < nums[l]) {
                    l = m + 1;
                }
                // search left
                else {
                    r = m - 1;
                }
            }
            // right sorted
            else {
                // search left
                if (target < nums[m]) {
                    r = m - 1;
                }
                else if (target > nums[r]) {
                    r = m - 1;
                }
                // search right
                else {
                    l = m + 1;
                }
            }
        }
        return -1;
    }
};