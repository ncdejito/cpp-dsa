class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = nums[0];
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            if (nums[l] < nums[r]) {
                res = min(res,nums[l]);
                break;
            }
            int c = (l+r)/2;
            res = min(res,nums[c]);
            if (nums[c] < nums[l]) {
                r = c-1;
            }
            else {
                l = c+1;
            }
            
        }
        return res;
    }
};